/*
	Game Mode Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51690603#questions/24088171

	---------------------------------------------------------------------------------------------------------------------------------------------------------
	THINGS YOU LEARN IN THIS
	- How to make your character invisible
	- How to change the default player actor
	- How to change the Game Mode



	HIDING THE CHARACTER HANDS WHEN RUNNING
	- In first-person, you'll initially see the hands when the character runs
	- Start by creating a Child Blueprint class from the "BP_FirstPersonCharacter" in the "FirstPerson" folder
		- As a reminder on how to create it
		- Go into the MyStuff folder you should have made yourself in the "Content" folder, since we want to store this with our stuff
		- Click "Add"
		- Click "Blueprint Class"
		- In the panel that comes up, go to the bottom and click the "All Classes" arrow
		- Search "BP_FirstPersonCharacter"
		- Select that
	- Double click the new character to open up the panel for it
	- There should be two meshes in the components list on the left side of the screen
		- Mesh (CharacterMesh0)
		- First Person Mesh
	- Click each of these, one at a time
	- Go into the details panel and search "visible"
	- Uncheck the box next to it
	- The character should be invisible now
	

	HOW TO SET THE NEW CHARACTER CLASS AS THE ACTIVE PLAYER CHARACTER
	- We have to change settings in the Game Mode Actor
	- Go in the "FirstPerson" folder and then into the "Blueprints" folder
	- Double click the "BP_FirstPersonGameMode"
	- Near the top of the new tab, you should see a long "NOTE:" under a bunch of the buttons
	- At the end of that, in blue you see "Open Full Blueprint Editor"
	- Click those blue words
	- In the components menu, click the parent component
		- In this case it's "BP_FirstPersonGameMode (Self)"
	- Look at the "Details" menu
	- Look in the Classes section
	- Look at "Default Pawn Class"
		- Pawn means an actor that can be controlled by the player
	- Click on the dropdown and click the name of the child blueprint you created
	- Save & Compile


	HOW TO SET THE GAME MODE
	- The Game Mode is the class we just changed to determine the default player actor
	- Two ways to do this
		- From the "List of world Blueprints available to thge user for editing or creation" menu
			- This is the branching symbol to the left of the "Quickly add to the project" button
			- Look in the Project Settings section
			- You can also override it with your own from the "World Override" section
		- In the Project Settings menu
			- Found in the Edit menu
			- Go to Maps & Modes
			- Set it from the dropdown in the Default GameMode

*/