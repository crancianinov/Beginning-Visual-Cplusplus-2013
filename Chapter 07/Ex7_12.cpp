//Ex7_12
//Utilizando um membro estatico para contar objetos
#include <iostream>
using namespace std;

class CBox
{
public:
	static int objectCount;
	//construtor
	explicit CBox(double lv, double wv = 1.0, double hv = 1.0) : m_Length{ lv }, m_Width{ wv }, m_Heigth{hv}
	{
		cout << "Constructor called." << endl;
		objectCount++;
	}

	CBox()
	{
		cout << "Default constructor called." << endl;
		m_Length = m_Width = m_Heigth = 1.0;
		objectCount++;
	}

	//Funcao para calcular o volume da caixa
	double volume()
	{
		return m_Length*m_Width*m_Heigth;
	}

private:
	double m_Length;
	double m_Width;
	double m_Heigth;
};

//Initializa membro estatico da classe CBox
int CBox::objectCount
{

};

int main()
{
	CBox boxes[5];
	CBox cigar{ 8.0, 5.0, 1.0 };

	cout << "Number of objects (accessed through class) = " << CBox::objectCount << endl;

	cout << "Number of objects (accessed through object) = " << boxes[2].objectCount << endl;

	cout << endl;
	return 0;
}