/*
	Line and Shape Tracing Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51938855#questions/24180103

	SUMMARY: Sets up shape tracing so we can interact only with the actor we want to interact with

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	WHAT IS LINE CASTING AND WHAT WE SHOULD USE INSTEAD
	- A technique used to interact with actors
	- Will trace a line from a start vector (which is where the camera is) to an end vector
	- When it intersects with an actor, we are able to interact with it
	- Two major problems with this
		1) The line can be very skinny, so it might miss the actor
		2) It might intersect with an object we don't intend to interact with
	- How to fix these problems
		1) Use Shape Trace instead
			- Trace a line using a shape (in our case, a sphere) in order to more easily intersect with actors
		2) We will have a custom setup up to only interact with actors that block this shape trace
			- Remember the collision features we looked at and how it can be set up to allow certain actor to either collide or pass through each other
	- GOING BACK INTO THE DETAILS PANEL FOR AN ACTOR
		- When clicking on the mesh for an actor in the details panel (has what looks like a brick next to it)
			- An example would be the "Key Item Mesh" for our glass statue
		- Scroll down to "Collision" section
		- Go into the "Collision Presets" subsection
		- In there there is a section called "Trace Responses"
			- Has "Visibility" and "Camera" rows
		- Each if these rows are called "Trace Channels"
		- This is what we'll be using for this technique
		- We're going to create our own channel that will be set to "Ignore" by default by all actors
			- The collectable item and lock actor will be set to "Block"
	
	HOW TO SET UP A CUSTOM TRACE CHANNEL FOR SHAPE TRACING
	- At the top, go into the "Edit" tab
	- Click "Project Settings"
	- IN "PROJECT SETTINGS"
		- On the left side, scroll down to the "Engine" section
		- Click on "Collision"
		- In the "Trace Channels" section
		- Click "New Trace Channel..."
		- Give it a name
			- We called it "Interact"
		- Set the "Default Response" to "Ignore"
		- Click "Accept"
	- Go back into the level
	- IN THE LEVEL WHERE WE NORMALLY DO STUFF
		- In the box that shows all the actors and meshes on the upper right side of the viewport
		- Click away from the BP_GlassStatue if you are on it
		- Click back onto the BP_GlassStatue
		- Down in the Display panel in the section of parts of this actor, click on the mesh
		- Scroll down to the "Collision" section
		- You can now see that "Interact" is a new Trace Channel
	- Go into BP for the BP_TestDoorLock
	- IN THE BP_TestDoorLock
		- Open the full blueprint
		- In the "Components" section, click TriggerComp
		- In the "Display" panel, scroll down to the "Collision" section
		- Set the "Collision Presets" dropdown to "Custom"
		- Set the status for the "Interact" trace to "Block"
	- IN THE BP_Glass Statue
		- Repeat the same steps for what you did to the TriggerComp
*/