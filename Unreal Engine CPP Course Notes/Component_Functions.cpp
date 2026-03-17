/*
	----------------------------------------------------------------------------------------------
	-----------------------------------COMPONENT FUNCTIONS----------------------------------------
	----------------------------------------------------------------------------------------------


	----------------------------------------
	---------CreateDefaultSubobject---------
	----------------------------------------
	- Creates a component of type <T> and returns a pointer to it
	- Allows you to create components from within the C++ code
	- Is a Template function
	- Parameters (in order)
		- Component Name (FName)
			- Can take a TEXT
	- Return
		- Pointer of type <T>

	In the .h file

		UPROPERTY(VisibleAnywhere)
		USceneComponent* RootComp;

	In the .cpp file (I used it in the constructor)

		RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));


	----------------------------------------
	------------SetupAttachment-------------
	----------------------------------------
	- Attaches component as child component of a SceneComponent
	- Used to attach items to BP
	- If being used in constructor, make sure to dereference any pointer you are using this on
	- Parameters (in order)
		- Parent Component (USceneComponent)

	In the .h File

		UPROPERTY(VisibleAnywhere)
		UTriggerComponent* TriggerComp;

	In the .cpp File
		
		TriggerComp = CreateDefaultSubobject<UTriggerComponent>(TEXT("Trigger Comp");
		TriggerComp->SetupAttachment(RootComp);											//Look at CreateDefaultSubobject for details on RootComp
*/