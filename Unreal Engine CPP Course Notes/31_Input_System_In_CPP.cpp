/*
	Input System in C++ Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51925791#overview

	SUMMARY: 

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO REGISTER THE INPUT MAPPING CONTEXT IN THE C++
	- We're going to look at how things are interacting with in the C++ first
	- In the C++, go to "DungeonEscapePlayerController"
		- Or "{ProjectName}PlayerController"
	- We're going to go over a lot of stuff that has yet to be covered in the course. That's okay. DON'T WORRY!

	- IN THE "DungeonEscapePlayerController.h"
		- You will see a TArray of UInputMappingContext pointers called "DefaultMappingContexts"
			- This holds all the IMCs

	- BACK TO THE EDITOR
		- In the "FirstPerson" folder
		- In the "Blueprints" folder
		- Open the "BP_FirstPersonPlayerController"
		- Click to view everything
		- In the "Details" panel, you'll see at the top, in the "Input" section, "Default Mapping Contexts"
			- You can unfold it to see what it has

	- IN THE "DungeonEscapePlayerController.cpp"
		- There is a "SetupInputComponent()" function
			- Three things are happening in it
				1) We're getting a subsystem
					- Needed to add the mapping context
				2) This is a for loop to check through items in the subsystem
				3) It's adding the mapping context in the for loop
			- Long explanation short, we're adding the IMC to the game

	- NOW TO LOOK AT THE INPUT ACTION SETUP

	- IN THE "DungeonEscapeCharacter.h"
		- We see a member variable for each of the Input Actions
			- Jump
			- Move
			- Look
			- Etc.
			- They are of type UInputAction pointer
			- They are EditAnywhere
				- We can see them in the editor
				- In the editor, open "BP_Player"
					- Scroll down in the "Details" panel to the "Input" section
					- We can see each of the actions there
					- If you look at the member variables, you'll see
						
						Category ="Input"

					- This puts the member variable into that section
		- Scrolling down more will show the member functions

	- IN THE "DungeonEscapeCharacter.h"
		- We can see where the functions are defined
		- Scroll down to "SetupPlayerInputComponent"
			- Like the Overlap function, it's meant to do something special for the player
			- In it, the EnhancedInputComponent
				- Let's us bind an action to a function we'll provide
					- VERY IMPORTANT
					- The "ETriggerEvent" determined at which point the trigger event gets called
						- The options for this available
							- Started
								- Says the input action is just started
									- If we're using a key, it's just being pressed
								- The function will only get called at the start
							- Completed
								- Says the input action is completed
									- When you take your hand off the key
								- Calls only when the input action is completed
							- Triggered
								- The key or mouse button is currently being pressed down
								- Will call the function continuously
									- Good for something like movement



	CREATING OUR OWN INPUT ACTION IN THE C++
	- For the Interact action
	- IN THE "DungeonEscapeCharacter.h"
		- Put this in the "DungeonEscapeCharacter.h" in the "protected" section

			UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
			class UInputAction* InteractAction;

		- Put this code at the bottom in the "public" section

			void Interact();

		- Created the definition for that function with Alt + Enter, Enter

	- IN THE "DungeonEscapeCharacter.cpp"
		- In the EnhancedInputComponent function, put this code
		
			EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &ADungeonEscapeCharacter::Interact);

				- Notice we are using "Started" for the ETriggerEvent since we only want it to happen once

		- To test that it's working, put this code in the "Interact" function

			UE_LOG(LogTemp, Display, TEXT("INTERACT!"));

	- IN THE BP_Player IN THE EDITOR
		- In the "Display" panel
			- Scroll down to the "Input" section
			- Go to "Interact Action"
			- In the dropdown, select "IA_Interact"


*/