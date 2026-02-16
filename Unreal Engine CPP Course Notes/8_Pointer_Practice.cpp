/*
	Pointer Practice Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51690715#questions/24088171

	----------------------------------------------------------------------------------------------------------------------------------------------------------

	NEVER LEAVE POINTERS UNASSIGNED

	float* floatPtr;

	- Instead, assign it nullptr;
		- This says it's not pointing to anything

	float* floatptr = nullptr;




	CHANGING THE VALUE IN A DEREFERENCED POINTER WILL CHANGE IT FOR THE VARIABLE WHOSE ADDRESS IT HAS
	- I know this seems obvious, but it's not something you normally think about since this doesn't happen without pointers

	float MyFloat = 10.f;
	float* PointerToMyFloat = &MyFloat;

	*PointerToMyFloat = 30.f;

	- *PointerToMyFloat == MyFloat is true even though we didn't do this
	
	MyFloat = 30.f



	PRINTING A POINTER MEMORY ADDRESS AS A STRING
	- Just as you use %f for displaying floats, pointers have their own
		- %p



	THE ARROW OPERATOR CAN BE USED TO USE FUNCTIONS WITH POINTERS

	MyVector.ToCompactString();
	PointerToMyVector -> ToCompactString();
	
*/