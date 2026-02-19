/*
	----------------------------------------------------------------------------------------------
	------------------------------------STRUCT FUNCTIONS------------------------------------------
	----------------------------------------------------------------------------------------------


	----------------------------------------
	-------------FVector::Dist--------------
	----------------------------------------
	- Calculates the distance between two FVectors
	- Parameters (in order)
		- StartLocation (FVector)
		- CurrentLocation (FVector)

	DistanceMoved = FVector::Dist(StartLocation, CurrentLocation);


	----------------------------------------
	-----------VectorVar.Equals-------------
	----------------------------------------
	- Compares two FVectors
	- Parameters (in order)
		- OtherVector (FVector)

	FVector FirstVector = FVector(1.f, 1.f, 1.f);
	FVector SecondVector = FVector(1.f, 1.f, 1.f);

	FirstVector.Equals(SecondVector);




	----------------------------------------
	--------VectorVar.GetSafeNormal---------
	----------------------------------------
	- Gets a safe version of the vector used from
		- FIGURE OUT WHAT THAT MEANS
	- Use this when correcting overshoot
	- Return
		- FVector

	FVector VectorVar;
	Fvector SafeVector = VectorVar.GetSafeNormal();




	----------------------------------------
	-------VectorVar.ToCompactString--------
	----------------------------------------
	- Takes all the coordinates of an FVector and displays it in a string
	- Good for checking coordinates that are not member variables
	- When displaying it, remember to put an * in front of the variable name
		- *VarVector.ToCompactString()
	- Return
		- FString

	FVector VarVector = FVector(1.f, 1.f, 1.f);
	FString = VarVector.ToCompactString();

*/