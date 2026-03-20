/*
	Collision 101 Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51879325#overview

	SUMMARY: A large explanation on the collision settings in an Actor's display panel

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW THE COLLISION SYSTEM WORKS AND HOW TO MAKE AN OBJECT INTANGIBLE
	- To understand this, click on an item
	- In the details panel, under the name of the item, click the StaticMeshComponent
	- IMPORTANT
		- Make sure the "All" option is selected for what to show, which is located under the search bar
	- Scroll down to the Collision section
	- Look at "Collision Presets"
	- Click on the dropdown
	- These are the most common collision settings made by unreal

	- SOME TYPES OF PRESETS
		- Pawn
			- Actors controlled by the player
		- PhysicsActor
			- Actors that simulate physics
		- Custom
	- Click the "Custom" option
	- A bunch of options will appear allowing us to customize
		- Collision Enabled
			- Determines type of collision the actor can do

			- OPTIONS
				- No Collisions
					- Allows other things to go through the object
				- Query Only (No Physics Collision)
					- Can do things like overlaps and ray sweeps
					- Can't do physics
						- Can't do things like jumping off of actors
				- Physics Only (No Query Collision)
					- The opposite of Query Only
				- Collision Enabled (Query and Physics)
					- The default setting
					- Can do both Query and Physics
				- There are two more we don't care about right now

		- Object Type
			- How the object is represented in the physics engine

			- OPTIONS
				- WorldStatic
					- An actor that doesn't move
				- WorldDynamic
					- An actor that moves with code
						- Like out doors with the movers
				- Pawn
					- Player controlled actors
				- PhysicsBody
					- Actors with physics simulation
				- Vehicle
				- Destructible
				- Projectilr

			- Important because it determines how we'll respond to collisions with other types

		- CHECKBOX OPTIONS
			- All have an Ignore, Overlap, and Block option
				- Ignore
					- Two actors will go through each other
				- Overlap
					- Actors will go through each other but generate over
				- Block
					- Two actors collide and stop

			- OPTIONS
				- Collision Responses
					- Selecting an option here selects the same option for all the other responses
				- Trace Responses
					- Not important right now
				- Object Responses
					- These are options for "Object Type" as described above
					- This allows us to decide how this one object will interact with a specific Object Type

			- COLLISION RESPONSE PRECEDENCE
				- Collision response least set to blocking will be the one that happens
					- Ignore > Overlap > Block
					- If an actor is set to Ignore, while another is set to overlap, they will ignore
					- If an actor is set to overlap, while another is set to block, they will overlap
					- In other words, they will only block if both actors are set to block
*/