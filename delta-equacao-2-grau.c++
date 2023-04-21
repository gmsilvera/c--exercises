/*Faça um programa em C++ para ler os coeficiente de uma equação do segundo grau e escrever o valor do seu Delta.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
	int a, b, c, delta;
	cout << "Entre com o a numero:";
	cin >> a;
	cout << "Entre com o b numero:";
	cin >> b;
	cout << "Entre com o c numero:";
	cin >> c;
	delta = b * b - 4 * a * c;
	cout << "O delta e: " << delta;
	return 0;
}