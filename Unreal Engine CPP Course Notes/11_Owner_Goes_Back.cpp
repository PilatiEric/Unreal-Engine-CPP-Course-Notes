/*
	Owner Goes Back Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51727135#overview

	------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO GET THE OBJECT TO GO BACK
	- If doing something like in the previous section
		- Don't let the boolean control when the object moves
			- Have the movement be outside the if statement so it's always moving
		- Have the if statement control which direction the object is moving
			- Do this by setting the target location inside the if/else statement
				- If boolean true
					- TargetLocation = StartLocation + MoveOffset
				- If boolean false
					- Target Location = StartLocation





	CODE USED FOR THIS

	// Called when the game starts
	void UMover::BeginPlay()
	{
		Super::BeginPlay();


		StartLocation = GetOwner() -> GetActorLocation();
	}


	// Called every frame
	void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
	{
		Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		if (ShouldMove)
		{
			//Target location is the start location + move offset
			TargetLocation = StartLocation + MoveOffset;
		}
		else
		{
			//Target Location is the start location
			TargetLocation = StartLocation;
		}

		FVector CurrentLocation = GetOwner()->GetActorLocation();

		float Speed = MoveOffset.Length() / MoveTime;

		FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, Speed);

		GetOwner()->SetActorLocation(NewLocation);
	}
*/