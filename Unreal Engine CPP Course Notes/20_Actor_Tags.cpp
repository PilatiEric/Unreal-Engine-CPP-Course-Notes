/*
	Actor Tags Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51810949#questions

	SUMMARY: Tags allow you to dictate which actors can interact with certain events (Like the player dealing with overlap and not a chair)

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	HOW TO HAVE OTHER ACTORS THAT ARE NOT THE PLAYER INTERACT WITH OVERLAP
	- In the details for the actor
	- Turn on "Simulate Physics" in the "Physics" section
	- Turn on "Generate Overlap Events" in the "Collision" section

	HOW TO ADD TAG TO PLAYER
	- Go to the player blueprint (BP)
		- In our case, it's "BP_Player" in the "MyStuff" folder
	- In the Components section on the left, select the BP_Player
	- In the Details panel on the right
	- Scroll down to the "Actor" section near the bottom
	- Open the "Advanced" section inside of that
	- Look to the "Tags" part
	- Click the Plus (+) sign
	- Choose a name for the tag and type it in the item that appears below

	HOW TO ADD TAG TO ANY ACTOR
	- Instead of going into the blueprint, click on the actor you want to add a tag to
	- Go into the details panel and click on the actor
		- EXAMPLE: For a chair named "SM_Chair3" you'd click "SM_Chair3 (Instance)"
	- In the search bar below, type "tag"
	- Click the the Plus (+) sign next to the "Tags" label
		- WARNING: There are two things that will appear
			- "Tags" and "Component Tags"
			- Only add to "Tags" for this
	- Name the tag

	HOW TO ACCESS THE TAGS FROM THE CODE
	- It will be inside of an AActor class item
	- In the case of the OnOverlapBegin() it's in the variable being passed in called "OtherActor" of type AActor*
	- Use a function called "ActorHasTag"
	- It takes one argument of type FName, but entering a string is fine
	- Enter the name of the Tag you are looking for

		bool HasTag = OtherActor->ActorHasTag("PressurePlateActivator");
*/