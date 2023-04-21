/*Faça um programa em C++ para ler os catetos de um triângulo retângulo e escrever a sua hipotenusa.*/

#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() 
{
	int y, x, hipo;
	cout << "Entre com o x:";
	cin >> x;
	cout << "Entre com o y:";
	cin >> y;
	hipo = sqrt(x * x + y * y);
	cout << "A hipotenusa e: " << hipo;
	return 0;
}