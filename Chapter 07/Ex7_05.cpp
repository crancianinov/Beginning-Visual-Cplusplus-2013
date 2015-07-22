//Ex7_05
//Definindo e utilizando o construtor default
#include <iostream>
using namespace std;

class CBox
{
public:
	double m_Length{ 1.0 };
	double m_Width{ 1.0 };
	double m_Height{ 1.0 };

	//Definicao do construtor
	CBox(double lv, double wv, double hv)
	{
		cout << "Chamada do construtor." << endl;
		m_Length = lv;
		m_Width = wv;
		m_Height = hv;
	}

	//Definicao do construtor default
	CBox()
	{
		cout << "Chamada do construtor default." << endl;
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
	CBox box2;												//Define box2 sem valores iniciais
	CBox cigarBox{8.0, 5.0, 1.0};

	cout << "Volume de box1 = " << box1.volume() << endl;
	cout << "Volume de cigarBox = " << cigarBox.volume() << endl;

	//Define os valores dos membros de box2 em relacao a box1
	box2.m_Height = box1.m_Height - 10;
	box2.m_Length = box1.m_Length / 2.0;
	box2.m_Width = 0.25*box1.m_Length;
	cout << "Volume de box2 = " << box2.volume() << endl;
	cout << endl;
	return 0;
}