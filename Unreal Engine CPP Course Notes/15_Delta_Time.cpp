/*
	Delta Time Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51309907#overview

	-----------------------------------------------------------------------------------------------------------------------------------------------------

	THE SPEED PROBLEM
	- Different computers will run your game at different speeds
	- This causes issues with with adding or subtracting values inside the Tick() function


	DELTA TIME
	- The amount of time it took the CPU of the last frame
	- Can make operations frame rate independent by multiplying the value we are adding with delta time
	

	NOTE FROM SELF: For deciding on when to have actor change directions or when to stop
	- Use FMath::IsWithin() due to lack of precision in knowing where something will stop
*/