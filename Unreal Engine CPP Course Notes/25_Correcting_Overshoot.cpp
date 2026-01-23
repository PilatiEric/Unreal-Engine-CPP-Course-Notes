/*
	Correcting Overshoot Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51309997#overview

	-----------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO CORRECT OVERSHOOT
	FVector MoveDirection = PlatformVelocity.GetSafeNormal(); MAKE SURE YOU USE THIS! I don't know what it does yet, but they say it's needed in the course
	FVector NewStartLocation = StartLocation + MoveDirection * MoveDistance;
	SetActorLocation(NewStartLocation);
	StartLocation = NewStartLocation;

	PlatformVelocity *= -1.f;  MAKE SURE YOU CHANGE THE DIRECTION OF THE ACTOR AFTER SETTING THE LOCATION


	Put simply, it figures out exactly where the platform should be by mulitplying the speed and direction
	and adding that to an FVector for the start location, determining the exact coordinates of the end of the path.
	
*/