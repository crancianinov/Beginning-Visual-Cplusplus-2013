//Ex5_07
//Using an lvalue reference to modify caller arguments
#include <iostream>
using std::cout;
using std::endl;

int incr10(int& num);								//prototype
//Function
int incr10(int& num)								//function with reference argument
{
	cout << endl << "Value received = " << num;
	num += 10;

	return num;
}

int main(void)
{
	int num(3);
	int value(6);

	int result = incr10(num);
	cout << endl << "incr10(num) = " << result << endl << "num = " << num;

	result = incr10(value);
	cout << endl << "incr10(value) = " << result << endl << "value = " << value << endl;
	return 0;
}