/*
	----------------------------------------------------------------------------------------------
	----------------------------------ACTOR INFO FUNCTIONS----------------------------------------
	----------------------------------------------------------------------------------------------


	----------------------------------------
	--------------ActorHasTag---------------
	----------------------------------------
	- Checks all tags for the given AActor to see if it has the one given as an argument
	- Can be used with if statements to determine which actor can activate certain events
		- EXAMPLE: The player can activate the Overlap events, but a chair can't
	- Class with this function
		- AActor
	- Arguments (in order)
		- TagName (FName or String)
	- Return
		- Bool

	AActor* MoverActor;

	bool HasTag = MoverActor->ActorHasTag("PressurePlateActivator");


	----------------------------------------
	----------FindComponentByClass----------
	----------------------------------------
	- Looks to see if an Actor contains the pointer for a certain class
		- Returns the pointer to that class if it find it and a nullptr if not
	- Used to connect something like a trigger component to an actor to use it and the parts of it
		- Like movement
		- EXAMPLE: Stepping on the trigger component makes the actor move
	- Is a template function
		- Uses <ClassName>
	- Return
		- Pointer to specified class (used in the <>) OR nullptr

	UPROPERTY(EditAnywhere)
	AActor* MoverActor;

	UMover* Mover;

	Mover = MoverActor->FindComponentByClass<UMover>();


	----------------------------------------
	----------------GetName-----------------
	----------------------------------------
	- Gets the name of an actor of a particular class
	- Example: Calling it inside of the MovePlatform function for the MovingPlatform class will get the name of the 
			   particular actor that called this function.
	- Return
		- FString

	AActor* Actor;
	FString Name = Actor->GetName();


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