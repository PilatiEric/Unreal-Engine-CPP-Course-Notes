/*
	Overshoot Problem Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51309991#overview

	-------------------------------------------------------------------------------------------------------------------------------------------------------

	WHAT IS THE OVERSHOOT PROBLEM
	- When using the current location to calculate when to get an object to switch directions, it can overshoot where you want it to change
	- This is not a problem at first, but if it goes on long enough, the object can go off course and mess up the game

	HOW DO WE TAKE CARE OF THIS?
	- StartLocation += MoveDistance * Direction
	- More notes on this in the next lesson
*/