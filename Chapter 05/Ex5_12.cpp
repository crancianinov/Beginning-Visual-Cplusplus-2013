//Ex5_12
#include <iostream>
using std::cout;
using std::endl;

double* treble(double);

int main(void)
{
	double num(5.0);
	double* ptr(nullptr);

	ptr = treble(num);

	cout << endl << "Three times num = " << 3.0*num;

	cout << endl << "Result = " << *ptr;

	cout << endl;
	return 0;
}

//Function to treble a value - mark 1
double* treble(double data)
{
	double result(0.0);
	result = 3.0*data;
	return &result;
}