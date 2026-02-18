/*
	----------------------------------------------------------------------------------------------
	-------------------------------ACTOR TRANSFORM FUNCTIONS--------------------------------------
	----------------------------------------------------------------------------------------------
	

	----------------------------------------
	----------AddActorLocalRotation---------
	----------------------------------------
	- Allows to set how much the rotational angle of an actor changes
	- Can be set inside of any action
		- Example: Tick()
	-Parameters (in order)
		- X (float)
		- Y (float)
		- Z (float)

	FRotator rotationToAdd = RotationVelocity * DeltaTime;

	AddActorLocalRotation(rotationToAdd);




	----------------------------------------
	--------FMath::VInterpConstantTo--------
	----------------------------------------
	- Calculates movement from start to target location for an FVector
	- Allows us to not have to do much work to get an object to the correct location
	- MAJOR NOTES
		- Requires the FMath header file to be included in the class to use this
		- #include "Math/UnrealMathUtility.h"
	- Parameters (in order)
		- CurrentLocation (FVector)
		- TargetLocation (FVector)
		- DeltaTime (float)
		- InterpSpeed (float)

	IN Beginplay()
	StartLocation = GetOwner() -> GetActorLocation();

	TargetLocation = StartLocation + MoveOffset;

	IN TickComponent()
	FVector CurrentLocation = GetOwner() -> GetActorLocation();

	ALTERNATIVE WAY OFF GETTING MOVEOFFSET RATHER THAN MANUALLY SETTING IT
	// MoveOffset = TargetLocation - StartLocation;

	float Speed = MoveOffset.Length() / MoveTime;

	FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, Speed);

	GetOwner() -> SetActorLocation(NewLocation);






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