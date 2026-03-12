/*
	Adding Tags in C++ Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51864247#overview

	SUMMARY: Adding tags will allow us to have inventory items that we can use with Lock Actors to trigger movers

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	We are going to add tags to items to allow them to be taken into an inventory and used for the purpose of pairing with lock actors

	SETTING UP THE CLASS FOR ITEMS
	- IN THE UNREAL EDITOR
		- At the top of the Unreal edits
		- Open the "Tools" tab
		- Click "New C++ Class"
		- Select "Actor" as the Parent Class
		- Click "Next"
		- Name is "CollectableItem"
		- Click "Create Class"
	- IN THE .h FILE
		- Add a public member variable named "ItemName" of type FString whose UPROPERTY is Edit Anywhere
	- IN THE .cpp FILE
		- Go into the constructor
		- Add this code:

		Tags.Add("CollectableItem")

		- Multiple Blueprints will be made from this class
		- Adding this in the constructor means we won't need to add it every single time we create a new item


	CREATE BLUEPRINT FROM THE ITEM CLASS
	- In the MyStuff folder in the Content Browser
	- Right click and click "Blueprint Class"
	- Down in the "ALL CLASSES" section
	- Search "CollectableItem"
	- Select this
	- Click "Select"
	- Give it a name
		- We called it "BP_GlassStatue"
	- Open up the BP
	- Open "Content Drawer" on the bottom left
	- Find the item you want to assign and drag it into the viewport
		- This is what we did
			- Go into "StarterContent"
			- Go into Props
			- Click and drag "SM_Statue" into the Viewport
	- Click the parent name of the BP in the "Components" window
		- It was called "BP_GlassStatue"
	- Go into the "Details" window
	- Scroll down to the "Collectable Item" section
	- Click the text box next to "Item Name"
	- Give it a name
		- We called it "GlassStatue"

	- Now it is ready to be placed in the level

*/