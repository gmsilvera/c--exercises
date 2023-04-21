/*Faça um programa em C++ que tendo como dados de entrada a altura de uma
 * pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte
 * fórmula: (72.7*altura) – 58*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  float peso, altura;
  cout << "Entre com a altura:";
  cin >> altura;
  peso = altura * 72.7 - 58;
  cout << "Peso Ideal:" << peso;
  return 0;
}