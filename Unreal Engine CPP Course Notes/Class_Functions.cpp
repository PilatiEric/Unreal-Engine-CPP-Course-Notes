/*
	----------------------------------------------------------------------------------------------
	------------------------------------CLASS FUNCTIONS-------------------------------------------
	----------------------------------------------------------------------------------------------


	----------------------------------------
	---------------UPROPERTY----------------
	----------------------------------------

	- Used to register a member variable with Unreal Engine
	- Lets us see and edit the variable in the Unreal editor
	- Variables (in order)
		- Specifier
			- EditAnywhere 
				- Indicates that this property can be edited via property windows, archetypes and instances within the Editor.
			- VisibleAnywhere
				- Indicates that this property is visible in property windows, but cannot be edited at all


	WARNING!!!!!!!!!!!!
	- If you use live coding with Header changes, you'll lose changes made to member variables inside of the Unreal editor


	class ClassName
	{
		UPROPERTY(EditAnywhere)
		float MyFloat;
	}
*/