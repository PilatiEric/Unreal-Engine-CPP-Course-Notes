/*
	----------------------------------------------------------------------------------------------
	----------------------------------ACTOR INFO FUNCTIONS----------------------------------------
	----------------------------------------------------------------------------------------------


	----------------------------------------
	----------------GetName-----------------
	----------------------------------------
	- Gets the name of an actor of a particular class
	- Example: Calling it inside of the MovePlatform function for the MovingPlatform class will get the name of the 
			   particular actor that called this function.
	- Return
		- FString

	string Name = GetName();


	----------------------------------------
	----------------GetOwner----------------
	----------------------------------------
	- Gets a pointer to the Actor that owns the component
	- This would allow you to use any function in the AActor
		- EXAMPLES
			- GetActorNameOrLabel()
			- GetActorLocation()
			- SetActorLocation()
	- Return
		- AActor* (AActor pointer)

	AActor* MyOwner = GetOwner();
*/