/*
	Movement & Physics Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51310011#questions/24069835

	----------------------------------------------------------------------------------------------------------------------------------------------------

	NOTES ABOUT OBJECT SET TO MOVE A CERTAIN DISTANCE
	- Do NOT set the MoveDistance to be a negative number
		- It causes a weird issue where it just transports to where it needs to go


	CONTROLLING THE CHARACTER'S MOVEMENTS
	- This involves things like controlling how high they can jump and how fast they can move
	
	HOW TO CHANGE THEIR MOVEMENTS
	- Go into the "Third Person" folder in the Content Browser
	- Go into the "Blueprints" folder
	- Open the character blueprint (in our charase "BP_ThirdPersonCharacter"
	- Look on the left side underneath where it displays the list of the physical parts of the BP
	- It'll be a part called "CharMoveComp", but the label given in our case is "Character Movement"
	- Click on this
	- On the right side of the screen, you'll see the detail panel with different sections dedicated to different aspects of their movement
		- This includes things like "Walkable Floor Angle"
			- Change this to a steeper angle to get the character out of deep places
				- In this tutorial, it'd be like if you jumped in the river, you couldn't get out
		- Includes other sections:
			- Walking
			- Jumping/Falling
			- Gravity
			- Swimming
			- Flying
	
	HOW TO TURN ON PHYSICS FOR STATIC MESHES
	- This causes the objects to react when other objects touch it
		- Like a barrel falling over when the character runs into it
		- In other words, it will not stay static in space
	- Select the mesh object you want to turn on physics for
	- Go into the details panel for the object
	- Scroll down to the "Physics" section
	- Check the box for "Simulate Physics"
	- CHANGING THE MASS OF THE OBJECT
		- Check the box next to "Mass" and set the number
			- This is also in the "Physics" section


*/