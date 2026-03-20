/*
	Setting Visibility Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51883167#overview

	SUMMARY: Setting the visibility of an Actor in the C++ and finishing the Lock class

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO SET UP AN ACTOR TO INTERACT WITH A LOCK
	- It will need a KeyItemName
		- This allows only the correct item to be used on the lock
		- Ours will be called "GlassStatue"
	- Will also need a bool to determine if it has a "Key" inside of it or not
		- Will be called "IsKeyPlaced"
			- Default is "false"
		- When it is false, the item will be invisible
	- GO INTO THE Lock.h FILE
		- Create these two member variables
			
			public:
				UPROPERTY(EditAnywhere)
				FString KeyItemName;
			private:
				UPROPERTY(VisibleAnywhere)
				bool IsKeyPlaced;

		- Create the getter and setter for "IsKeyPlaced"
		- In the setter, put this code

			TriggerComp->Trigger(NewIsKeyPlaced);

		- "NewIsKeyPlaced" is the parameter name for the setter


	HOW TO CHANGE THE VISIBILITY OF THE 
	- This involved messing with the "KeyItemMesh"
	- Also put this in the setter for IsKeyPlaced

		KeyItemMesh->SetVisibility(NewIsKeyPlaced);

	FINISHING UP
	- Close Unreal editor and rebuild the project
	- Open it back up and click the instance of the BP_TestDoorLock
	- In the Display panel, scroll down until you get to the "Lock" section
	- In the "Key Item Name" set the name you want
		- Again, ours was "GlassStatue"
	- DO NOT FORGET
		- Set the Mover Actor field in the display panel to the actor you want it moving
			- Assuming the actor has a Mover in it
*/