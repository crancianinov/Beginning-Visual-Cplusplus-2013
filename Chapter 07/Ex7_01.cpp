//Ex7_01
//Exercising structures in the yard
#include <iostream>
using std::cout;
using std::endl;

//Definition of a struct to represent rectangles
struct RECTANGLE
{
	int Left;
	int Top;

	int Right;
	int Bottom;
};

//Prototype of function to calculate the area of a rectangle
long Area(const RECTANGLE& aRect);

//Prototype of function to move a rectangle
void MoveRect(RECTANGLE& aRect, const int& x, const int& y);

int main(void)
{
	RECTANGLE Yard = { 0, 0, 100, 120 };
	RECTANGLE Pool = {30, 40, 70, 80};
	RECTANGLE Hut1, Hut2;

	Hut1.Left = 70;
	Hut1.Top = 10;
	Hut1.Right = Hut1.Left + 25;
	Hut1.Bottom = 30;

	Hut2 = Hut1;									//Define Hut2 the same as Hut1
	MoveRect(Hut2, 10, 90);							//Now move it to the right position

	cout << endl << "Coordinates of Hut2 are " << Hut2.Left << "," << Hut2.Top << " and "
		<< Hut2.Right << "," << Hut2.Bottom;

	cout << endl << "The area of the yard is " << Area(Yard);

	cout << endl << "The area of the pool is " << Area(Pool) << endl;

	return 0;
}

//Function to calculate the area of a rectangle
long Area(const RECTANGLE& aRect)
{
	return (aRect.Right - aRect.Left)*(aRect.Bottom - aRect.Top);

}

//Function to Move a Rectangle
void MoveRect(RECTANGLE& aRect, const int& x, const int& y)
{
	int length(aRect.Right - aRect.Left);					//Get length of rectangle
	int width(aRect.Bottom - aRect.Top);					//Get width of rectangle

	aRect.Left = x;											//Set top-left point
	aRect.Top = y;											//to new position
	aRect.Right = x + length;								//Get bottom-right point as
	aRect.Bottom = y + width;								//increment from new position
	return;
}