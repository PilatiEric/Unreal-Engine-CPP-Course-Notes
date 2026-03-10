/*
	BP_PressurePlate Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51864233#overview

	SUMMARY:

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	MAKING A BP FOR YOUR PRESSURE PLATE
	- Go into the "MyStuff" folder in the Content Browser
	- Right click on an empty space and click "Blueprint Class"
	- In the window that pops up, select "Actor"
	- Name the component BP_PressurePlate


	SETTING UP THE ACTORS INSIDE IT
	- Double click BP_PressurePlate
	- In the Components window on the left, click "Add"
	- Type in "Trigger" and add that
	- WHAT COMES NEXT IS DONE TO TEACH HOW TO HANDLE CERTAIN THINGS; SKIP TO NEXT UNINDENTED LINE FOR NORMAL SETUP
		- Click the Trigger component and click "Add"
		- Add a "cube"
		- You'll see that the Cube is now a child of Trigger
		- To fix this, Left Click on the Cube and drag it up to "DefaultSceneRoot"
		- In the little box that pops up, click "Attach"
			- Don't click "Make New Root" it'd make the cube the parent of the Scene
	- Click on the "DefaultSceneRoot" and then click "Add"
	- Add "Cube"
	- Scale the cube to your liking


	SETTING UP THE TRIGGER
	- In the Components panel on the left, click "Trigger"
	- Use the transform arrows to move it up, so it's above the cube
	

	BETTER WAYS OF VIEWING THE COMPONENTS FOR SCALING
	- When a component is clicked on, four symbols to the left of the Details panel's search bar, you'll see a video camera shape with "Perspective" next to it
	- Click this
	- You can choose which direction to view a component from this way.
	- View a trigger from the top can help to scale it to the box it's a part of
	

	HOW TO MAKE SURE THAT THE CUBE ISN'T IN THE GROUND
	- Two symbols to the left of the Search bar in the Details panel, you'll see an Eye symbol
	- Click the Eye
	- Check "Show Floor"


	HOW TO GET A PRESSURE PLATE TO MOVE MULTIPLE ACTORS
	- Add another Trigger to it

*/