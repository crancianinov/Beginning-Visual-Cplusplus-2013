//Ex5_03
//A sucessful attempt to modify caller arguments
#include <iostream>
using std::cout;
using std::endl;

int incr10(int* num);				//prototype

int main(void)
{
	int num(3);

	int* pnum(&num);				//pointer to num

	cout << endl << "Address passed = " << pnum;

	int result = incr10(pnum);
	cout << endl << "incr10(pnum) = " << result;

	cout << endl << "num = " << num << endl;
	return 0;

}

//Function
int incr10(int* num)
{
	cout << endl << "Address received = " << num;

	*num += 10;

	return *num;
}