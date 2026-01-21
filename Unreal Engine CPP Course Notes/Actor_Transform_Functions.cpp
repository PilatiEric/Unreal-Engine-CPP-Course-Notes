/*
	----------------------------------------------------------------------------------------------
	-------------------------------ACTOR TRANSFORM FUNCTIONS--------------------------------------
	----------------------------------------------------------------------------------------------


	----------------------------------------
	------------SetActorLocation------------
	----------------------------------------
	- Give the current location of an actor as an FVector
	- Parameters
		- None
	- Return
		- FVector

	FVector CurrentLocation = GetActorLocation();








	----------------------------------------
	------------SetActorLocation------------
	----------------------------------------
	- Allows you to set the coordinates of an actor's location
	- Can be set inside of any action
		- Example: BeginPlay()
			- At starting the game, the actor will snap to the given location
	- Parameters (in order)
		- Coordinates
			- Takes an FVector struct
				- X, Y, and Z coordinates


	FVector TestVector = FVector(220.0f, -150.0f, 390.0f);

	SetActorLocation(TestVector);












	------------------------------------------------------------------------------
	-------------USEFUL RELATED FUNCTIONS AND WHERE TO FIND THEM------------------
	------------------------------------------------------------------------------

	----------------------------------------
	--------------FVector::Dist-------------
	----------------------------------------
	- Calculates distance between to FVectors
	- Function Info Location
		- Structs.cpp
*/