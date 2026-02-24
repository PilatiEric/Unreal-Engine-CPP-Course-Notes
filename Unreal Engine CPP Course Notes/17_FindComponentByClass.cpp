/*
	FindComponentByClass Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51806173#overview

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO CONNECT A TRIGGER COMPONENT TO AN ACTOR COMPONENTS MOVEMENT
	- Getting access to actor that owns mover component from trigger component
		- Gonna do this by creating an actor pointer that is EditAnywhere
	- Using our trigger component in this course as the example:
		- Create UPROPERTY(EditAnywhere) on an AActor* variable in the TriggerComponent.h

			UPROPERTY(EditAnywhere)
			AActor* MoverActor;

		- In the Unreal editor, in the details panel, in the Trigger Component section
		- There is a dropdown that lets you pick an actor from the level to connect to it
			- There is also a picker tool (looks like an eye dropper) that lets you pick an actor from the scene itself
		- Select the actor you want to connect to the trigger
		- Next step is saving a pointer to the mover component inside of the trigger component
		- We first need to add the mover header to the TriggerComponent.h
			- IMPORTANT NOTE ON WHERE TO PUT THE HEADER
				- Put it above the #include that has ".generated.h" in it
				- You will get problems if you don't
		- Add #include "Mover.h"
		- Add a UMover* member variable to the TriggerComponent.h

			UMover* Mover;

		- We need to find the mover component inside the mover actor
		- We're going to save that in the UMover variable
			- Will allow us to use it freely in TriggerComponent functions
				- This will be done in the BeginPlay
		- Will first need to check if the AActor* is valid or not
			- This checks to see if an actor was selected from that dropdown
		- Use an if statement in the BeginPlay function

			if (MoverActor != nullptr)
				- Stuff happens in here
			else
				- Print log message

		- USING THE FindComponentByClass FUNCTION
			- Will need to use the arrow to dereference the AActor*
			- Takes a look inside the Actor at all components
			- Looks for a specific class, if it finds it, it returns it
			- This is a template function
				- Uses <>
				- Enter the class you're looking for in there
					- For us, it's the UMover
			- Save the value it returns in the UMover pointer and check to see if the Mover pointer is nullptr

				if (MoverActor != nullptr)
				{
					Mover = MoverActor->FindComponentByClass<UMover>(); // Returns nullptr if it doesn't find an example of that class
					if (Mover != nullptr)
					{

					}
				}

			- 
*/