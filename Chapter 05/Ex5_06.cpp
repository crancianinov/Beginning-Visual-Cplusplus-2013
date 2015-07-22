//Ex5_06
//Passing a two-dimensional array to a function
#include <iostream>
using std::cout;
using std::endl;

double yield(double array[][4], int n);							//Prototype

int main(void)
{
	double beans[3][4] = {	{ 1.0, 2.0, 3.0, 4.0 },
							{ 5.0, 6.0, 7.0, 8.0 },
							{ 9.0, 10.0, 11.0, 12.0 } };
	cout << endl << "Yield = " << yield(beans, sizeof beans / sizeof beans[0]) << endl;
	return 0;
}
//Function
double yield(double beans[][4], int count)
{
	double sum(0.0);
	for (int i = 0; i < count; i++)
		for (int j = 0; j < 4; j++)
			sum += beans[i][j];
	return sum;
}