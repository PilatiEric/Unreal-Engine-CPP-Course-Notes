/*
	UWorld Object Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51938873#questions/24180103

	SUMMARY: 

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	WHAT IS A UWORLD OBJECT
	 - UWorld Documentation
		- https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/Engine/UWorld
	- A top level object created when the game first begins
		- Everything else in the game is contained in it
			- Like the ULevel
		- Line tracing and shape tracing functions belong to it
	- THERE ARE TWO FUNCTIONS YOU NEED TO KNOW
		- LineTraceSingleByChannel
		- SweepSingleByChannel
		- More information found in UWorld_Functions.cpp or in the documentation above


	SETTING UP THE CODE USING THE TRACING WITH THE WORLD (BUT NOT REALLY)
	- IN THE "DungeonEscapeCharacter.cpp"
	- IN THE "Interact" function
	- Add this code
		 
		 //GetWorld()->SweepSingleByChannel();

	- Make sure it's commented out because we aren't ready to use it yet, there's still more to understand
	

	UWorld Variable
	- TimeSecond
		- Gives us the number of seconds since the game started




*/