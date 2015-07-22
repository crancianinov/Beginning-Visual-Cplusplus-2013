//Ex7_03
//Calculando o volume de uma caixa com uma funcao membro
#include <iostream>
using namespace std;

class CBox
{
public:
	double m_Length = 1.0;										// Comprimento da caixa em polegadas
	double m_Width = 1.0;										// Largura da caixa em polegadas
	double m_Height = 1.0;										// Altura da caixa em polegadas

	//Funcao para calcular o volume da caixa
	double volume()
	{
		return m_Length*m_Width*m_Height;
	}
};

int main()
{
	CBox box1;
	CBox box2;
	CBox box3;

	double boxVolume{ box1.volume() };							//Guarda o volume da caixa

	cout << "Valor default do volume de box1: " << boxVolume << endl;

	//Define os valores dos membros do objeto box1
	box1.m_Height = 18.0;
	box1.m_Length = 78.0;
	box1.m_Width = 24.0;

	boxVolume = box1.volume();									//Calcula o volume novo
	cout << "Volume de box1 agora eh: " << boxVolume << endl;

	//Define os valores dos membros de box2 em relacao a box1
	box2.m_Height = box1.m_Height - 10;
	box2.m_Length = box1.m_Length / 2.0;
	box2.m_Width = 0.25*box1.m_Length;
	cout << "Volume de box2 = " << box2.volume() << endl;

	box3 = box2;
	cout << "Volume de box3 = " << box3.volume() << endl;

	//Mostra o tamanho de uma caixa na memoria
	cout << "Um objeto CBox ocupa " << sizeof(CBox) << " bytes." << endl;

	cout << endl;
	return 0;
}