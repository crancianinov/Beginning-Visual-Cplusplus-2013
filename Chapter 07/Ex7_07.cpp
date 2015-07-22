//Ex7_07
//Classe com membros privados
#include <iostream>
using namespace std;

class CBox
{
public:
	//Definicao do construtor com lista de inicializacao
	explicit CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0) : m_Length{ lv }, m_Width{ wv }, m_Height{ hv }
	{
		cout << "Chamada do construtor." << endl;
	}

	//Funcao para calcular o volume da caixa
	double volume()
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
	CBox match{ 2.2, 1.1, 0.5 };
	CBox box2;

	cout << "Volume da caixa match = " << match.volume() << endl;

	//Retire o "//" da linha abaixo para ter um erro - membro da classe esta privado.
	//box2.m_Length = 4.0;

	cout << "Volume de box2 = " << box2.volume() << endl;

	cout << endl;
	return 0;
}