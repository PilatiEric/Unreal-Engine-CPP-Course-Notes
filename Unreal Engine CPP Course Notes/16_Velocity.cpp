/*
	Velocity Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51309925#overview

	---------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO ADJUST VELOCITY OF AN OBJECT MORE EASILY
	- Create an FVector class member variable
	- Use UPROPERTY(EditAnywhere) on it
	- Add or subtract that FVECTOR from the FVector representing the actor's location in your code
	- Adjust the velocity from the details area of the Unreal editor


	FVector CurrentLocation = GetActorLocation();
	FVector CurrentLocation -= (PlatformVelocity * DeltaTime);

	- You can also multiple or divide an FVector by a float
	- The float will multiple or divide each number in the FVector

	float SomeFloat = 60.0f;
	FVector CurrentLocation = SomeFloat * CurrentLocation;

*/