/*
	Enhanced Input System Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51925781#overview

	SUMMARY: Explains how to map keys and buttons to action in the game (Like clicking a button will cause you to jump)

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	SETTING UP THE INPUT SYSTEM
	- Since we're using the 1st person template, it's already been created for us
	- IN THE CONTENT BROWSER
		- In the Content folder
		- In the Input folder
		- The two asset types we need to understand:
			- Input Action (IA)
				- Those are in the "Actions" folder
				- Represent the actions we can take
					- Jump
					- Move
					- Look
					- Etc.
			- Input Mapping Context (IMC)
				- A collection of Input Actions
				- OPEN UP THE "IMC_Default"
					- The most important section is the "Mappings" section
					- Expand the "Mappings" section
						- When you create an IMC, the mappings section will normally be blank
						- Click on the Plus (+) symbol to add one
						- Click on the dropdown in the item created and pick the action you want
						-UNFOLD AN INDIVIDUAL ITEM
							- You'll see all the key and mouse mappings there
							- When adding a new one
								- Click on the symbol for the keyboard or game controller then the button or stick on the controller to put in which you want mapped to an action

	CREATING THE INTERACT ACTION
	- Go into the "Actions" folder in the "Input" folder
	- Right-click on an empty area
	- Open up the "Input" section
	- Click "Input Action"
	- Name it
		- We called it "IA_Interact"
	- Go back to the "Input" folder
	- Open "IMC_Default" by double clicking on it
	- On the "Mappings" line, click the Plus (+) sign to create a new item
	- Click the dropdown for this item and select the IA you created
	- In the line for the action you added click the Plus (+) sign
	- Click the Keyboard symbol on the new item create
	- Click the button you want to assign to the action
		- We used the "Left Mouse Button"
		- I added the "E" key as well
		- AS A NOTE
			- You can also use the dropdown next to the keyboard symbol to manually choose from a list which button or controller stick to assign an action to


*/