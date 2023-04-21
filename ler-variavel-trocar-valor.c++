/*Faça um programa em C++ para ler duas variáveis inteiras e trocar o seu
 * conteúdo.*/
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
  int variavel_a, variavel_b, temp;
  cout << "Entre com a variavel A:";
  cin >> variavel_a;
  cout << "Entre com a variavel B:";
  cin >> variavel_b;
  temp = variavel_a;
  variavel_a = variavel_b;
  variavel_b = temp;
  cout << "Variavel A:" << variavel_a;
  cout << "\n";
  cout << "Variavel B:" << variavel_b;
  return 0;
}
