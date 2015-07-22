//Ex5_09
//Using an rvalue reference parameter

#include <iostream>
using std::cout;
using std::endl;

int incr10(int&& num);										//Prototype

int main(void)
{
	int num(3);
	int value(6);
	int result(0);
	/*
	result =  incr10(num);
	cout << endl << "incr10(num) = " << result << endl << "num = " << num;

	result = incr10(value);
	cout << endl << "incr10(value) = " << result << endl << "value = " << value;
	*/

	result = incr10(value + num);
	cout << endl << "incr10(value+num) = " << result << endl << "value = " << value;

	result = incr10(5);
	cout << endl << "incr10(5) = " << result << endl << "5 = " << 5;

	cout << endl;
	return 0;
}

//Function to increment a variable by 10
int incr10(int&& num)
{
	cout << endl << "Value received = " << num;
	num += 10;
	return num;
}