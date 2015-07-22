//Ex5_14
//Using a static variable within a function
#include <iostream>
using std::cout;
using std::endl;

void record(void);					//prototype

int main(void)
{
	record();

	for (int i = 0; i <= 3; i++)
		record();

	cout << endl;
	return 0;
}

//Function
void record(void)
{
	static int count(0);
	cout << endl << "This is the " << ++count;
	if ((count > 3) && (count < 21))
		cout << "th";
	else
		switch (count % 10)
		{
		case 1: cout << "st";
			break;
		case 2: cout << "nd";
			break;
		case 3: cout << "rd";
			break;
		default: cout << "th";
		}
	cout << " time I have been called";
	return;
}