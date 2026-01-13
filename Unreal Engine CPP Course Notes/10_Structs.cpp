/*
	Struct Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51309855#overview

	--------------------------------------------------------------------------------------------------------------------------------------------

	WHAT IS A STRUCT?
	- A group of variables packaged together under one name


	struct FVector
	{
		float X;
		float Y;
		Float Z;
	}

	FVector MyVector;
	MyVector.X = 10.4f;

	- FVector is already a type used specifically in Unreal
		- We already used it - the Transform properties in the Unreal editor
			- It let us change the Location, Rotation, and Scale of an object

	HOW TO USE AN FVECTOR IN UNREAL

	FVector TestVector = FVector(11.2f, 3.4f, 7.6f);
	- The "FVector" after the assignment operator (=) is called a Constructor
*/