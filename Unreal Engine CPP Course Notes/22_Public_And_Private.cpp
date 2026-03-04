/*
	Public & Private Notes

	SOURCE: https://www.udemy.com/course/unrealcourse/learn/lecture/51864065#questions/24129805

	SUMMARY: Explains the Public and Private access modifiers and how they interact with member variables and functions

	--------------------------------------------------------------------------------------------------------------------------------------------------------

	BEST PRACTICES
	- Don't give other classes direct access to member variables
		- Make a Get or Set function for accessing them
			- This is called "Data Hiding"
	

	SETTER AND GETTER FUNCTIONS
	private:
		bool ShouldMove;

	public:
		bool GetShouldMove();
		void SetShouldMove(bool NewShouldMove);


	bool UMover::GetShouldMove()
	{
		return ShouldMove;
	}

	void UMover::SetShouldMove(bool NewShouldMove)
	{
		ShouldMove = NewShouldMove;
	}
*/