/*
	Pointers 101 Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51690703#questions/24088171

	--------------------------------------------------------------------------------------------------------------------------------------------------

	VARIABLES IN MEMORY
		- Variables are stored in the memory of the computer
		- All variable have an address
		- This addres is the location of the location of this variable in the memory
		- We can get the address with the "&" operator

		float MyFloat = 10.5f;
		&MyFloat;				//This is the address



	POINTERS
		- A pointer is a type of variable
		- It stores the address of a variable in memory, and is used to access that variabe
		- To create a pointer, use the "*" operator after the data type of the variable

		float MyFloat = 10.5f;
	
		The pointer can be created with the * next to either the datatype or the variable name
		float* PointerToMyFloat = &MyFloat;
		float *PointerToMyFloat2 = &MyFloat;



	ACCESSING POINTERS
		- * operator is used to dereference a point and access the value it is pointing to

		float MyFloat = 10.5f;
		float* PointerToMyFloat = &MyFloat;

		float Value = *PointerToMyFloat;	Value is 10.5f
		*PointerToMyFloat = 3.2f;			This allows you to assign new values by using the pointer variable

		- Because we're working with the location of the value, we can change the value from that variable anywhere


	POINTER TYPES
		- We can create pointers to any data type
			- C++ basic data types
				- int
				- float
				- etc.
			- structs
			- classes
	
		FVector MyVector = FVector(1.f, 1.f, 1.f);
		FVector* PointerToMyVector = &MyVector;

		- Since we need to interact with a specific member of the vector, we need to dereference before accessing it

		(*PointerToMyVector).X = 2.f;

		- This is because the pointer version of the type won't have an X member
		- There's an easier way to do what was done above

		PointerToMyVector -> X = 2.f;

	ADVANTAGES OF POINTERS
		- Let's say we want to create a copy of a variable

		int A = 10;
		int B = A;

		- If you assign the original to a new variable the entire memory will be copied
		- Not a problem for basic data types
			- Becomes costly with bigger types
				- Classes
				- structs


*/