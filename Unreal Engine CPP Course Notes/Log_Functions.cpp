/*
	----------------------------------------------------------------------------------------------
	-------------------------------------LOG FUNCTIONS--------------------------------------------
	----------------------------------------------------------------------------------------------



	----------------------------------------
	-----------------UE_LOG-----------------
	----------------------------------------
	- Allows log messages to be outputed in the Output Log in Unreal Engine by placing it inside of a function for a certain action
	- Parameters (in order)
		- Log Category
		- Level of Importance
			- Display (Displays the text in WHITE)
			- Warning (Displays the text in YELLOW)
			- Error (Displays the text in RED)
		- Text
			- Uses the TEXT() macro (macro is like a function)
			- Can insert variables by inserting a %
				- %d - int variable
				- %f - float variable
				- %c - char variable
				- %s - FString variable
					- Put * before variable name when inserting into parameter
					- Example: UE_LOG(LogTemp, Display, TEXT("%s"), *FStringVariable);
		- Variables
			- If using a %, can put variables after to insert into the TEXT string
			- Inserting multiple % allows you to insert multiple variables

	UE_LOG(LogTemp, Display, TEXT("Hello world!"));
*/