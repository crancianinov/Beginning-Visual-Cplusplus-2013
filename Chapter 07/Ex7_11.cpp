//Ex7_11
//Utilizando um array de objetos de classe
#include <iostream>
using namespace std;

class CBox
{
public:
	//definicao do construtor
	explicit CBox(double lv, double wv = 1.0, double hv = 1.0) : m_Length{ lv }, m_Width{ wv }, m_Height{hv}
	{
		cout << "Constructor called." << endl;
	}
	//construtor default
	CBox()
	{
		cout << "Default constructor called." << endl;
		m_Length = m_Width = m_Height = 1.0;
	}

	//Funcao para calcular o volume da caixa
	double volume() const
	{
		return m_Length*m_Width*m_Height;
	}

private:
	double m_Length;
	double m_Width;
	double m_Height;
};

int main()
{
	CBox boxes[5];							//Array de objetos CBox
	CBox cigar{ 8.0, 5.0, 1.0 };
	cout << "Volume of boxes[3] = " << boxes[3].volume() << endl
		<< "Volume of cigar = " << cigar.volume() << endl;
	cout << endl;
	return 0;
}