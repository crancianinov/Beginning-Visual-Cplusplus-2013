//Ex7_08
//Criando uma funcao friend da classe
#include <iostream>
#include <iomanip>
using namespace std;

class CBox
{
public:
	//Definicao do construtor
	CBox(double lv, double wv, double hv) : m_Length{ lv }, m_Width{ wv }, m_Height{ hv }
	{
		cout << "3-arg Chamada do construtor." << endl;
	}
	explicit CBox(double side) : CBox{ side, side, side }
	{
		cout << "1-arg Chamada do construtor." << endl;
	}

	CBox() = default;

	//Funcao para calcular o volume da caixa
	double volume()
	{
		return m_Length*m_Width*m_Height;
	}

private:
	double m_Length;
	double m_Width;
	double m_Height;

	//Funcao Friend
	friend double boxSurface(const CBox& aBox);
};

//Funcao friend para calcular a area da superficie do objeto caixa
double boxSurface(const CBox& aBox)
{
	return 2.0*(aBox.m_Length*aBox.m_Width+aBox.m_Length*aBox.m_Height+aBox.m_Height*aBox.m_Width);
}

int main()
{
	CBox match{ 2.2, 1.1, 0.5 };
	CBox cube{ 5.0 };
	CBox box;

	cout << "Volume da caixa match =" << setw(10) << match.volume() << "   Surface area = " << boxSurface(match) << endl;

	cout << setw(16) << "Volume do cubo =" << setw(10) << cube.volume() << "   Surface area = " << boxSurface(cube) << endl;

	cout << "Volume do box =" << setw(10) << box.volume() << "   Surface area = " << boxSurface(box) << endl;
	cout << endl;
	return 0;
}