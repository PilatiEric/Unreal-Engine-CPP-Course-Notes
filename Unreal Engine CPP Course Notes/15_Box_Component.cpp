/*
	Box Component Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51746127#overview

	-----------------------------------------------------------------------------------------------------------------------------------------------------------

	WHAT'S NEED FOR A TRIGGER COMPONENT
	- Uses a Box Class
		- Inherates Scene component class
			- Has transform
		- Has box collision component
		- Gonna have a connection with a mover actor
			- Has function called Trigger
		- WAYS TO USE IT
			- Pressure Plate
			- Lock

	
	HOW TO CREATE A BOX COMPONENT
	- Tools tab at the top
	- "New C++ Class"
	- Click "All Classes" tab
	- Search "boxcomponent"
	- Select that under "ShapeComponent"
	- Name it
		- We named it "TriggerComponent"
	- Click "Create Class"
	- This will open Visual Studio with a "TriggerComponent.cpp" and "TriggerComponent.h" file
	- Click "Reload All" in the box that pops up in it
	- IMPORTANT NOTE
		- Does not come with premade functions
			- BeginPlay
			- Tick
		- Will need to get these things from the Mover component
	- UCLASS
		- Pass this into the UCLASS parenthesis
		-  ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) 
			- The meta is needed to be able to add this component to actors
	- Functions
		- Put these

		protected:
			// Called when the game starts
			virtual void BeginPlay() override;

		public:
			// Called every frame
			virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		- To create the definitions
			- Click on function name
			- Alt + Enter
			- "Create definition of '{Function Name}' in TriggerComponent.cpp
		- Inside the definitions
			Super::BeginPlay();

			Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

		- The Super keyword used to refer to the parent class
			- Calls functions in those parent classes
	- Rebuild
	- Add to actors
	- Will need to click the trigger component in the actor's display panel and drag it up above the actor
*/