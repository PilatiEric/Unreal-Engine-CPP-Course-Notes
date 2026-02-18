/*
	FMath::VInterpConstantTo Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51724241#overview

	----------------------------------------------------------------------------------------------------------------------------------------------------
	NOTES FOR THE MOVING COMPONENT SO FAR
	- StartingLocation - This is part of the moving component only
		- It is not part of an object
		- It can only interact with an object

	MOVE OFFSET VARIABLE
	- Determines how much we're going to move in X, Y, and Z
	- We add the MoveOffset to the StartLocation to get the TargetLocation


	VInterpConstantTo()
	- This calculates the movement from start to target location for us
	- More info on this function in Actor_Transform_Functions.cpp
	- Requires an #include directive for the FMath header file

*/