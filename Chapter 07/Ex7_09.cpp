//Ex7_09
//Inicializando um objeto com um objeto da mesma classe
#include <iostream>
using namespace std;

class CBox												// Definicao da classe de escopo global
{
public:
	//Definicao do construtor
	explicit CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0) :
		m_Length{ lv }, m_Width{ wv }, m_Height{ hv }
	{
		cout << "Constructor called." << endl;
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
	CBox box1{ 78.0, 24.0, 18.0 };
	CBox box2{ box1 };

	cout << "box1 volume = " << box1.volume() << endl;
	cout << "box2 volume = " << box2.volume() << endl;

	cout << endl;
	return 0;
}