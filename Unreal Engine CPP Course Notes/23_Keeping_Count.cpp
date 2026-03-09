/*
	Keeping Count Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51864219#questions/24129805

	SUMMARY: Keeping track of the number of actors on a pressure plate and deactivating only when they're all off of it.

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	If there are multiple actors on a pressure plate, one getting knocked off will deactivate it. We need to fix this

	NOTE ABOUT INT
	- Unreal recommends using int32 since it guarentees a 32-bit integer.
	- You'll know the size of the variable as a benefit.

	HOW TO MAKE SURE A PRESSURE PLATE DOESN'T DEACTIVATE PREMATURELY
	- Keep count using an int32
	- Enter an int32 member variable into your TriggerComponent.h
	- Set a UPROPERTY of VisibleAnywhere
	- Have inside the trigger function, it adds one each time OverlapBegin starts and subtract one each time OverlapEnd starts
	- Only run Trigger() in OverlapEnd when that count reaches 0
*/