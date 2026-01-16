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

	HOW DOES DELTA TIME WORK TO EQUALIZE COMPUTERS RUNNING AT DIFFERENT SPEEDS
	- The way Delta Time works is that faster computers have a smaller Delta Time and slower computers a higher Delta time.
	- We pick a number for all computers to multiply their Delta Time by and use that to change time or speed of movement.
	- This works because even though a computer with a slower speed is getting a higher number when multiplying their
	  their Delta Time by the chosen number, the faster computer is adding their smaller number to the movement or time more time in 
	  the same amount of time.
	- This balances out to the slower computer and the larger computer having the same movement speed in the game

	int MovementSpeed = 120;
	CurrentLocation.X -= (MovementSpeed * DeltaTime);

	ComputerA DeltaTime = 0.00833
	ComputerB DeltaTime = 0.01666

	For ComputerA:
	MovementSpeed (120) * DeltaTime (0.00833) = ~1 per Tick() call
	Tick() Calls per second (1 / 0.00833 = ~120) * ~1 = ~120

	For ComputerB:
	MovementSpeed (120) * DeltaTime (0.01666) = ~2 per Tick() call
	Tick() Calls per second (1 / 0.01666 = ~60) * ~2 = ~120



*/