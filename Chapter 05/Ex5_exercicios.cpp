//Ex5_exercicios
//Exercicio 1 fatorial com recursividade
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>

using namespace std;

////Prototype function
//int fact(int n);
//
//int main()
//{
//	int x = 0;
//	cout << "Entre com o valor a ser fatoriado." << endl;
//	cin >> x;
//	for (int i = 0; i <= x; i++)
//	{	
//		cout << "Fatorial de " << x << " eh: " << i << " " << fact(x) << endl;
//	}
//	cout << endl;
//	return 0;
//}
//
////Function
//int fact(int n)
//{
//	if (n <= 0)
//	{
//		return 1;
//	}
//	if (n > 1)
//	{
//		return n*fact(n - 1);
//	}
//	else
//		return 1;
//}

//Exercicio 2
//Funcao que troca dois ints atraves de ponteiros

//Prototipo da funcao
//void swap(int* x1, int* x2);
//
//int main()
//{
//	int v1 = 0;
//	//int* v1p = &v1;
//
//	int v2 = 0;
//	//int* v2p = &v2;
//
//	cout << "Entre com valores para serem trocados: " << endl;
//	cin >> v1 >> v2;
//	cout << "O primeiro valor eh: " << v1 << endl;
//	cout << "O segundo valor eh: " << v2<< endl;
//	//chama funcao
//	swap(&v1, &v2);
//	cout << "Depois swap: " << v1 << " e " << v2 << endl;
//	cout << endl;
//	return 0;
//
//}
//
//void swap(int* x1, int* x2)
//{ 
//	int temp = *x1;
//	cout << "Os valores trocados sao: ";
//	*x1 = *x2;
//	*x2 = temp;
//}

//Exercicio 3
//const double PI = 3.14159265;
//
////graus para rad
//const double graus_para_rad(PI / 180.0);
//
//// sin
//double sind(double d)
//{
//	return sin(d*graus_para_rad);
//}
//
//// cos
//double cosd(double d)
//{
//	return cos(d*graus_para_rad);
//}
//
//// tan
//double tand(double d)
//{
//	return tan(d*graus_para_rad);
//}
//
//int main()
//{
//	//Cout 
//	cout << "cos(60) = " << fixed << cosd(30.0) << endl;
//	cout << endl;
//	return 0;
//}

//Exercicio 4
//Prototipo funcao input
void input
{

}
