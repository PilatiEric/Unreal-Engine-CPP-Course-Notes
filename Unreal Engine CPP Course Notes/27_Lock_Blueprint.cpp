/*
	Lock Blueprint Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51879319#overview

	SUMMARY: Shows how to set up a lock blueprint for quickly creating new locks

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO CREATE A LOCK BLUEPRINT
	- In the Unreal editor
	- In the "Content Browser"
	- In the "MyStuff" folder (Or wherever you're keeping your own custom things)
	- Right click in an empty space and click "Blueprint Class"
	- In the "All Classes" section at the bottom of the window that pops up
	- Search "Lock"
	- Select "Lock"
	- Click "Select"
	- Name the new BP
		- We called it "BP_TestDoorLock"
	- If you open up the BP, you'll see in the Components display the Root Comp, Trigger Comp, and Key Item Mesh we created in the previous lesson


	SETTING UP THE PHYSICAL PART OF THE COMPONENT
	- Inside of the BP (when you double click on it)
	- Open "Content Drawer"
	- Find the mesh you want to use
		- For us, we went into the "StarterContent" folder
		- Go into the "Props" folder
		- We selected "SM_TableRound"
		- Left click and drag to the viewport above
	- In the "Components" display for the BP
	- Click "Key Item Mesh"
	- In the "Details" display for the "Key Item Mesh"
	- Scroll down to the "Static Mesh" section
	- Using the "Static Mesh" find the item you want to set as the activator for the lock
	- Make sure the item is placed properly
	- Raise the TriggerComponent box so it's roughly covering the activator
*/