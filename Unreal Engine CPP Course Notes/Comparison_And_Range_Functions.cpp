/*
	----------------------------------------------------------------------------------------------
	-----------------------------COMPARISON AND RANGE FUNCTIONS-----------------------------------
	----------------------------------------------------------------------------------------------


	-------------------------------------------------------------
	--------------------COMPARISON FUNCTIONS---------------------
	-------------------------------------------------------------






	----------------------------------------
	----------FMath::IsNearlyEqual----------
	----------------------------------------
	- Checks to see if two doubles are nearly equal to a precise degree

	- WHAT TO USE FOR 
		- Useful for avoiding rounding errors when dealing with floating-point decimal variables
	- Parameters (in order)
		- First Number (float)
		- Second Number (float)
		- ErrorTolerance (float)
			- Optional
				- Default: 1.0E-8
	- Return
		- Bool


	HOW TO USE IN CODE
	bool isNearlyEqual = FMath::IsNearlyEqual(1.3645, 1.3645);











	----------------------------------------
	-----------FMath::IsNearlyZero----------
	----------------------------------------
	- Checks if a floating point number is nearly zero
	- WHAT TO USE FOR
		- Useful for avoiding rounding errors
	- Parameters (in order)
		- Number (float)
		- ErrorTolerance (float)
			-Optional
	- Return
		- Bool

	HOW TO USE IN CODE
	bool isNearlyZero = FMath::IsNearlyZero(numberToCheck);













	-------------------------------------------------------------
	----------------------RANGE FUNCTIONS------------------------
	-------------------------------------------------------------


	----------------------------------------
	------FMath::Clamp OR std::clamp--------
	----------------------------------------
	- Takes a value and checks if it is within a range
		- It returns the value if it's within the range or the min or max of the range (whichever is closer)
	- WHAT TO USE FOR
		- EXTREMELY GOOD for keeping an actor's position within a certain range
	- Parameters (in order)
		- Value (any number type)
		- Min range value (same as the type of the first parameter)
		- Max range value (same as teh type of the first parameter)
	- Returns
		- Same type as was passed in



	HOW TO USE IN CODE
	if (!IsPlatformStill)
	{
		CurrentLocation.X -= (MovementSpeed * DeltaTime);

		// Determine if the platform has reached the end of its path
		float clipped = std::clamp (CurrentLocation.X, -420.f, 220.f);
		if (clipped != CurrentLocation.X)
		{
			MovementSpeed *= -1.f;
			IsPlatformStill = true;
			CurrentLocation.X = clipped;
		}

		SetActorLocation(CurrentLocation);
	}








	----------------------------------------
	-------------FMath::IsWithin------------
	----------------------------------------
	- Checks to see if a number within a particular range
		- Is exclusive to the max of the range
			- Can be equal to the minimum of the range, but must be less than the maximum
	- Allows for the use of any number-based data type
	- Parameters (in order)
		- TestValue (any number type)
		- MinValue (any number type)
		- MaxValue (must match the MinValue's type)
	- Return
		- Bool

	HOW TO USE IN CODE
	bool isWithin = FMath::IsWithin(5, 1.0f, 7.0f);
*/