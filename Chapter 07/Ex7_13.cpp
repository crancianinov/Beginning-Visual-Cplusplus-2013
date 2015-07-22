//Ex7_13
//Exercitando o operador de acesso de membro indireto
#include <iostream>
using namespace std;

class CBox
{
public:
	//Definicao de contrutores
	explicit CBox(double lv = 1.0, double wv = 1.0, double hv = 1.0) : m_Length{ lv }, m_Width{ wv }, m_Height{hv}
	{
		cout << "Constructor called." << endl;
	}

	//Funcao para calculo do volume da caixa
	double volume() const
	{
		return m_Length*m_Width*m_Height;
	}

	//Funcao para comparar duas caixas entao retornando true se o primeiro for maior que o segundo
	bool compare(const CBox* pBox) const
	{
		if (!pBox)
			return false;
		return this->volume() > pBox->volume();
	}


private:
	double m_Length;
	double m_Width;
	double m_Height;
};

int main()
{
	CBox boxes[5];
	CBox match{2.2, 1.1, 0.5};
	CBox cigar{ 8.0, 5.0, 1.0 };
	CBox* pB1{ &cigar };
	CBox* pb2{};
	cout << "Address of cigar is " << pB1 << endl
		<< "Volume of cigar is " << pB1->volume() << endl;
	pb2 = &match;

	if (pb2->compare(pB1))
		cout << "match is greater than cigar" << endl;
	else
		cout << "match is less than or equal to cigar" << endl;

	pB1 = boxes;
	boxes[2] = match;

	//Acesso atraves de ponteiro
	cout << "Volume of boxes[2] is " << (pB1 + 2)->volume() << endl;
	cout << endl;
	return 0;
}