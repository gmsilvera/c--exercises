/*Faça um programa em C++ para ler três números inteiros e escrever a média dos números lidos.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {

  int numero1, numero2, numero3;
  float media;

  cout << "Digite o primeiro número:";
  cin >> numero1;
  cout << "DIgite o segundo número: ";
  cin >> numero2;
  cout << "DIgite o segundo número: ";
  cin >> numero3;

  media = (numero1 + numero2 + numero3) / 3;

  cout << "A média é: " << media;

  return 0;
}