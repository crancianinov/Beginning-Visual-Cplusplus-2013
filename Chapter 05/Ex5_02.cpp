//Ex5_02
//A futile attempt to modify caller arguments
#include <iostream>
using std::cout;
using std::endl;

int incr10(int num);										//func prototype

int main(void)
{
	int num(3);

	cout << endl << "incr10(num) = " << incr10(num) << endl << "num = " << num << endl;
	return 0;
}

//Function 
int incr10(int num)
{
	num += 10;
	return num;

}