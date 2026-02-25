/*
	----------------------------------------------------------------------------------------------
	---------------------------------------DELEGATES----------------------------------------------
	----------------------------------------------------------------------------------------------



	-------------------------------------------------------------
	---------------------OVERLAP DELEGATES-----------------------
	-------------------------------------------------------------


	----------------------------------------
	--------OnComponentBeginOverlap---------
	----------------------------------------
	- Fires when something overlaps with the box component
	- Can be used for activating a mover component when stepping on a pressure plate
	- Component Associated With
		- Box Component
	- Signature Required (This is the class function declaration)

		UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	- How to Initialize in Constructor or BeginPlay

		OnComponentBeginOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapBegin);



	void UTriggerComponent::BeginPlay()
	{
		Super::BeginPlay();

		if (IsPressurePlate)		//Makes the pressure plate function optional for a trigger component
		{
			OnComponentBeginOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapBegin);
		}
	}

	void UTriggerComponent::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
	{
		if (Mover)
		{
			Mover->ShouldMove = true;
		}
	}



	----------------------------------------
	---------OnComponentEndOverlap----------
	----------------------------------------
	- Fires when something stops overlapping with the box component
	- Can be used for stopping or reversing an action of a mover when stepping on a pressure plate
	- Component Associated With
		- Box Component
	- Signature Required (This is the class function declaration)

		UFUNCTION()
		void OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	- How to Initialize in Constructor or BeginPlay

		OnComponentEndOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapEnd);



	void UTriggerComponent::BeginPlay()
	{
		Super::BeginPlay();

		if (IsPressurePlate)		//Makes the pressure plate function optional for a trigger component
		{
			OnComponentEndOverlap.AddDynamic(this, &UTriggerComponent::OnOverlapEnd);
		}
	}


	void UTriggerComponent::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
	{
		if (Mover)
		{
			Mover->ShouldMove = false;
		}
	}
*/