/*
	Actor Components Notes

	SOURCE: http://udemy.com/course/unrealcourse/learn/lecture/51690675#questions/24088171

	-----------------------------------------------------------------------------------------------------------------------------------------------------------


	TURNING OF GRID AND RESIZE SNAP
	- This is why when you change the transform properties of items, they don't move or change smoothly, but "snap" to different degrees of change
	- In the row below the one with the play button and the "Quickly add to the project" dropdown, and in between where they are, there are three symbols that start blue
	- The first is the "snap to grid" button and the third is the "snap to resize" button
		- Clicking this will stop it from snapping
		- Changing the number to the right of it will change how much the transform properties snap


	ABOUT THE ACTOR COMPONENT
	- Very basic
	- Doesn't have a transform property
	- Cannot be attached to other components in the hierarchy

	ABOUT THE SCENE COMPONENT
	- Does have a transform property
	- Can be attached to other components


	CREATING THE ACTOR COMPONENT
	- In this lesson, we're creating a door and a mechanic to make it move
	- To start, go into the "Tools" dropdown at the top of the screen and click "New C++ Class"
	- Click "Actor Component"
	- Click Next
	- Give it a name
		- We called it "Mover"
	- Click "Create Class"
	- This will open up Visual Studio and create a new .cpp and .h file with the class name

	ABOUT THE ACTOR COMPONENT CODE YOU WILL SEE
	- You'll see the class name you give is prefixed with "U"
		- In this case, "UMover"
	- This happens to components in Unreal game framework
		- Actors are prefixed with "A" as we've seen in the past
	- ABOVE THE CLASS DECLARATION
		- You will see there is a UCLASS
		- It contains "BlueprintSpawnableComponent" next to "meta"
			- This allows us to use the component in a blueprint
		- "ClassGroup" says "Custom" next to it because we created it


	ATTACHING A COMPONENT TO AN OBJECT IN UNREAL
	- Click the object you want to add the component to
	- In the Details panel, click "Add"
	- Search for the component class you made using the name
	- Select it
	- You'll see it added to the Details panel
	- 
*/