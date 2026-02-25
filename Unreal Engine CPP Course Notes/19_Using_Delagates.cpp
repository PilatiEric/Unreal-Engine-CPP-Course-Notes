/*
	Using Delegates Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51806259#overview

	SUMMARY: Explains how to use delagates to trigger certain functions during events

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	WHAT ARE DELEGATES
	- An event that fires when certain things happen
	- Functions can be connected to delegates
	- When delegate is fired, function is called

	HOW TO CALL A DELEGATE WITH A BOX COMPONENT
	- Has a delegate called OnComponentBeginOverlap
		- Fires when something overlaps the box component
			- EXAMPLE: The player walking into the trigger
		- More information found in Delegates.cpp

	- Has other delegate called OnComponentEndOverlap
		- Fires when something stops overlapping with the component
		- More information founc in Delegates.cpp

	- Use this inside of the Class cpp file
		
		void UTriggerComponent::UTriggerComponent()
		{
			OnComponentBeginOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapBegin);
			OnComponentEndOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapEnd);
		}
			- AddDynamic() used to bind function to the delegate.
				- OnOverlapBegin could have been anything, they were only given that name in this case because it made sense
			- IMPORTANT
				- This can be put in the contructor or any other function in the cpp file for the class

		void UTriggerComponent::OnOverlapBegin()
		{
			Mover->ShouldMove = true;
		}

		void UTriggerComponent::OnOverlapEnd()
		{
			Mover->ShouldMove = false;
		}

	- IMPORTANT
		- Requires a specific function signature to bind the event
		- Can be found in the documentation
		- Found in the "C++ Only" section of the Unreal documentation
			- https://dev.epicgames.com/documentation/en-us/unreal-engine/cpp-only-example

		
		UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);


		UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

		- Put these in the header file in a public section
		- UFUNCTION
			- A macro that registers the function with unreal engine

	- Once those function signatures are in the header, create the function definitions with Alt + Enter after clicking on the function name




	HOW TO MAKE PRESSURE PLATE FUNCTIONALITY OPTIONAL
	- Not all trigger actors are going to be pressure plates
		- Lock actors, for example where you place an item in a certain place to activate them

	- Add a UPROPERTY(EditAnywhere) boolean member variable to the class header file
	- Use that with an if statement on the lines of code we added that use ".AddDynamic"

		UPROPERTY(EditAnywhere)
		bool IsPressurePlate = false;

		if (IsPressurePlate)
		{
			OnComponentBeginOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapBegin);
			OnComponentEndOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapEnd);
		}

*/