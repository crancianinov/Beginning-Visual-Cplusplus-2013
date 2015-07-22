//Ex7_04
//Utilizando construtores
#include <iostream>
using namespace std;

class CBox
{
public:
	double m_Length = 1.0;
	double m_Width = 1.0;
	double m_Height = 1.0;

	//Definicao do construtor
	CBox(double lv, double wv, double hv)
	{
		cout << "Chamada do construtor." << endl;
		//Set values of data members
		m_Length = lv;
		m_Width = wv;
		m_Height = hv;
	}

	//Funcao para calcular o volume da caixa
	double volume()
	{
		return m_Length*m_Width*m_Height;
	}
};

int main()
{
	CBox box1{78.0, 24.0, 18.0};
	CBox cigarBox{8.0, 5.0, 1.0};

	cout << "Volume de box1 = " << box1.volume() << endl;
	cout << "Volume of cigarBox = " << cigarBox.volume() << endl;
	cout << endl;
	return 0;
}