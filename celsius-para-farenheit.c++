/*Faça um programa em C++ para ler uma temperatura em
graus Celsius e transformá-la em farenheit. Utilize a
seguinte fórmula: F = (180(C + 32)) / 100.*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
  float c, f;
  cout << "Entre com a temperatura em celsius:";
  cin >> c;
  f = 180 * (c + 32) / 100;
  cout << "Em Fahrenheit: " << f;
  return 0;
}