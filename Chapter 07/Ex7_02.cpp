//Ex7_02
//Criando e utilizando classes CBox
#include <iostream>
using namespace std;

class CBox												//Definicao da classe em escopo global
{
public:
	double m_Length;									// Comprimento da caixa em polegadas
	double m_Width;										// Largura da caixa em polegadas
	double m_Height;									// Altura da caixa em polegadas
};

int main()
{
	CBox box1;											//Declara box1 do tipo CBox
	CBox box2;											//Declara box2 do tipo CBox

	double boxVolume{};									//Guarda o volume da caixa

	//Define os valores dos membros do objeto box1
	box1.m_Height = 18.0;								
	box1.m_Length = 78.0;
	box1.m_Width = 24.0;

	//Define os valores dos membros de box2 em relacao a box1
	box2.m_Height = box1.m_Height - 10;
	box2.m_Length = box1.m_Length / 2.0;
	box2.m_Width = 0.25*box1.m_Length;

	//Calcula o volume de box1
	boxVolume = box1.m_Height*box1.m_Length*box1.m_Width;

	cout << "Volume de box1 = " << boxVolume << endl;
	cout << "box2 tem os lados com o valor total de " << box2.m_Height + box2.m_Length + box2.m_Width
		<< " polegadas." << endl;

	//Mostra o tamanho de uma caixa na memoria
	cout << "Um objeto CBox ocupa " << sizeof box1 << " bytes." << endl;

	cout << endl;
	return 0;
}