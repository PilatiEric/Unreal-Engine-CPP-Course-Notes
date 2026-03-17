/*
	CreateDefaultSubobject Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51864251#overview

	SUMMARY: This shows how create a component in the C++

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO CREATE THE LOCK CLASS
	- In the Unreal editor
	- Click the "Tools" tab at the top of the screen
	- Click "New C++ Class"
	- Click "Actor"
	- Click "Next"
	- Name it 
		- We called it "Lock"
	- Click "Create Class"
	- In the .cpp file create
	- In the constructor, add this code

		Tags.Add("Lock"); //You can put whatever you want in there instead of Lock, but you need to stay consistant in using the correct tag identifier

	

	NOTE ON WHAT WE'RE DOING NEXT:
	We will be adding components to the class from within the C++ code. Normally this is done from the editor, but I want access to them from within the code, so we'll be doing things slightly differently.

	CREATING COMPONENTS INSIDE THE C++ CODE
	- IN THE LOCK.H FILE
		- We're going to need a "TriggerComponent", a "Static Mesh" component, and a "Scene" component
		- We need to include some header files for this
		- At the top, under the #include "GameFramework/Actor.h" and before the #include "Lock.generated.h"
		- Include this code

			#include "TriggerComponent.h"					//Or whatever you called your trigger component
			#include "Components/StaticMeshComponent.h"		//Will let us create a static mesh component

	- IN THE PUBLIC AREA OF THE LOCK.H FILE
		- Include this code

			UPROPERTY(VisibleAnywhere)
			USceneComponent* RootComp;			//This is what we'll be attaching everything else to

			UPROPERTY(VisibleAnywhere)
			UTriggerComponent* TriggerComp;

			UPROPERTY(VisibleAnywhere)
			UStaticMeshComponent* KeyItemMesh;	//Will be invisible at first, and when we place an item, it will become visible

	- IN THE CONSTRUCTOR OF THE LOCK.CPP FILE
		- We'll be using a Template function for this
			- CreateDefaultSubobject<T>();
				- It creates a component of type T and returns a pointer to us
		- Add this code
			
			RootComp = CreateDefaultSubobject<USceneComponent>(TEXT("Root Comp"));

				- If you look in the BP of the component, under the "Component" display, you'll see a child component
					- Like "SM_Statue"
				- "Root Comp" is what its name will be

			SetRootComponent(RootComp);

				- In the BP, it sets the USceneComponent pointer as the Root Component

			TriggerComp = CreateDefaultSubobject<UTriggerComponent>(TEXT("Trigger Comp");
			TriggerComp->SetupAttachment(RootComp);
				- This sets up the TriggerComp as a child component to the RootComp

			KeyItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Key Item Mesh"));
			KeyItemMesh->SetupAttachment(RootComp);


			

*/