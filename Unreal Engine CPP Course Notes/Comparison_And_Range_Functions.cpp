/*
	----------------------------------------------------------------------------------------------
	-----------------------------COMPARISON AND RANGE FUNCTIONS-----------------------------------
	----------------------------------------------------------------------------------------------


	----------------------------------------
	----------FMath::IsNearlyEqual----------
	----------------------------------------
	- Checks to see if two doubles are nearly equal to a precise degree
	- Useful for avoiding rounding errors when dealing with floating-point decimal variables
	- Parameters (in order)
		- First Number (float)
		- Second Number (float)
		- ErrorTolerance (float)
			- Optional
				- Default: 1.0E-8
	- Return
		- Bool


	bool isNearlyEqual = FMath::IsNearlyEqual(1.3645, 1.3645);











	----------------------------------------
	-----------FMath::IsNearlyZero----------
	----------------------------------------
	- Checks if a floating point number is nearly zero
	- Useful for avoiding rounding errors
	- Parameters (in order)
		- Number (float)
		- ErrorTolerance (float)
			-Optional
	- Return
		- Bool

	bool isNearlyZero = FMath::IsNearlyZero(numberToCheck);










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

	bool isWithin = FMath::IsWithin(5, 1.0f, 7.0f);
*/