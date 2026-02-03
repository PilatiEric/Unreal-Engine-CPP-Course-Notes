/*
	Creating Obstacles Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51310009#questions/24069835

	-------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO PLACE OBSTACLES - THAT YOU DON'T INTEND TO MOVE OR INVOLVE IN PHYSICS
	- Find the asset you want
		- In the lesson's case, we look at "Construction VOL 1"
	- Go into the "Meshes" folder
	- Drag these items onto the screen
	

	HOW TO PLACE OBSTACLES - THAT YOU WANT MOVING AND RESPONDING TO PHYSICS
	- Go to one of your blueprints you made
		- In this case, it's the moving platform blueprint we made
	- Open up the content drawer
	- Choose the mesh for the part you want to act as the component of the blueprint
	- Drag it into the frame
	- Save and compile
	- SIDE NOTE: Regarding size of object
		- In the blueprint design screen, you can click the part and set the scale to make it the default size
		- IT WILL CHANGE IT BACK IF YOU MESS WITH THE SCALE IN THE UE LEVEL WINDOW
	- TO CHANGE THE MESH FOR ONLY ONE INSTANCE OF THE BLUEPRINT AND NOT THE MAIN BLUEPRINT
		- Click on the object in the level
		- In the "Details" section on the right side click on the component being used as the mesh
		- Down below in the "Static Mesh" section, choose the mesh you want from the dropdown

	SETTING THE LOCATION OF THE GIZMO THAT CONTROLS THE ACTOR - Caled the Default Scene Root
	- This is the thing with the arrows that controls scale and location
	- Go back into the blueprint designer window.
	- Look for the circle/orb that looks like it has a gear in it
	- Use the arrows for the object to drag the object around until that circle/orb is where you want it to be
	- To make it easier to center for object the center is going to be inside of
		- Above the window showing the actual component, towards the right side (the third dropdown from the right and will likely say "lit")
			- Click this and select "Wireframe"
			- This let's you see inside of the object
*/