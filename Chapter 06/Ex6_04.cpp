//Ex6_04 Using Exception handling
#include <iostream>
using namespace std;

//Prototype function
void testThrow();

int main()
{
	int counts[] {34, 54, 0, 27, 0, 10, 0};
	double time{ 60 };						//One hour in minutes
	int hour{};								//Current hour

	for (auto count : counts)
	{
		try
		{
			cout << endl << "Hour " << ++hour;
			if (0 == count)
			{
				testThrow();
			}
			cout << " minutes per item: " << time / count;
		}
		catch (const char aMessage[])
		{
			cout << endl << aMessage << endl;
		}
	}
	return 0;
}

//Functions
void testThrow()
{
	throw " Zero count - calculation not possible.";
}