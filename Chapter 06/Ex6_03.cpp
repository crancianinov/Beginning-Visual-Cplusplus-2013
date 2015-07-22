//Ex6_03
//Ommitting function arguments
#include <iostream>
using namespace std;

void showit(const char message[] = "Something is wrong.");					//Prototype function

int main()
{
	const char mymess[] {"The end of the world is nigh."};

	showit();											//Display the basic message
	showit("Something is terribly wrong!");				//Dislpay an alternative

	showit();											//Display the default again
	showit(mymess);										//Display a predefined message

	cout << endl;
	return 0;
}

//Function
void showit(const char message[])
{
	cout << endl << message;
	return;
}