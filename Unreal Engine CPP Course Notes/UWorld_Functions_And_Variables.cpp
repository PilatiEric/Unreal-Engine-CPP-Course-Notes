/*
	----------------------------------------------------------------------------------------------
	---------------------------------UWORLD FUNCTIONS & TYPES-------------------------------------
	----------------------------------------------------------------------------------------------

	DOCUMENTATION
	https://dev.epicgames.com/documentation/en-us/unreal-engine/API/Runtime/Engine/UWorld




	-------------------------------------------------------------------------------
	---------------------------------FUNCTIONS-------------------------------------
	-------------------------------------------------------------------------------



	----------------------------------------
	----------------GetWorld----------------
	----------------------------------------
	- Gives you a pointer to the World Object of the game
	- You can access all other UWorld functions from this one by dereferencing it

	----------------------------------------
	--------LineTraceSingleByChannel--------
	----------------------------------------
	- Traces a ray against the world using a specific channel (like the "Interact" channel made in 32_Line_And_Shape_Tracing.cpp) and return the first blocking hit
	- Can be used to interact with object, for example
	- 



	----------------------------------------
	----------SweepSingleByChannel----------
	----------------------------------------
	- Sweep a shape against the world and return the first blocking hit using a specific channel (like the "Interact" channel made in 32_Line_And_Shape_Tracing.cpp) 
	- Can be used to interact with object, for example
	- IMPORTANT NOTE ABOUT HOW IT WORKS
		- First argument is type FHitResult& OutHit
		- This is an out variable, meaning it's sending a information to this thing since it uses a reference
		- That can be used to access the information
	- Some of the arguments
		- Start Location (FVector)
		- End Location (FVector)
		- Rotation (FVector)
	- Return
		- Bool






	-------------------------------------------------------------------------------
	---------------------------------FUNCTIONS-------------------------------------
	-------------------------------------------------------------------------------



	----------------------------------------
	--------------TimeSeconds---------------
	----------------------------------------
	- Gives how many seconds have passed since the game started
*/