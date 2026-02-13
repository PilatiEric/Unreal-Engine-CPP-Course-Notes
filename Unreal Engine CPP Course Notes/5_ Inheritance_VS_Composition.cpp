/*
	Inheritance vs. Composition Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51690669#questions/24088171

	-------------------------------------------------------------------------------------------------------------------------------------------------------

	WHAT IS INHERITANCE
	- Class A (child) gets all the characteristics and functions that Class B (parent) has
		- Child "is a" parent
	- Is very rigid and can cause problems in edge cases

	WHAT IS COMPOSITION
	- Class A has an instance of Class B
		- Can choose to use its functionality, but doesn't have to
		- Child "has a" parent

	AN EXAMPLE OF HOW INHERITANCE IS RIGID
	- Parent class Animal
		- Live()
		- Child Classes of Animal
			- Mammal
				- MakeMilk()
				- Child class of Mammal
					- Cow
			- Reptile
				- LayEggs()
				- Child class of Reptile
					- Snake
		- Edge Case
			- Platypus
				- Is a mammal, but can lay eggs
				- With inheritance, since it's a mammal, it can't access the reptile's LayEggs() function

	HOW TO USE COMPOSITION FOR THIS EDGE CASE
	- Create MakeMilkComponent
	- Create EggLayingComponent
	- Assign these components to proper classes


	UNREAL ENGINE USES A LOT OF INHERITANCE SO WE'RE FORCE TO USE IT

*/