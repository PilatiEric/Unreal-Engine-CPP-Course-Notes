/*
	True and False Values Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51806193#overview

	SUMMARY: Shows how to be able to simplify checks for nullptr due to what is evaluated as true or false in C++

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	FACTS ABOUT TRUE AND FALSE IN C++
	- 0 is used to represent false
		- EXAMPLES OF THINGS THAT REPRESENT FALSE
			- false
			- 0
			- nullptr
			- NULL (Used in C, nullptr was introduced in C++)
	- Everything non-zero is true
		- EXAMPLES
			- true
			- "Hello"
			- 'a'
			- 10
			- 3.45f
			- -999



	HOW TO SIMPLIFY CHECKS FOR NULLPTR
	- Valid pointers have non-zero numbers
	- Nullptr has false value
		- Has a 0 value

		AActor* MyActor1 = &OtherActor;		//true

		AActor* MyActor2 = 0;				//false
		AActor* MyActor3 = nullptr;			//false
		AActor* MyActor4 = NULL;			//false

	- An if statement check for a nullptr can be simplified as this

		if (MyActor1)	//If it has a valid pointer, this will return true

		if (!MyActor1)	//If it has a valid pointer, this will return false

*/