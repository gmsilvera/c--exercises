/*Escreva um programa em C++ que, dado um número de segundos, converta para
 * dias, horas, minutos e segundos. Por exemplo, 7322 segundos correspondem a 0
 * dias, 2 horas, 2 minutos e 2 segundos.*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
  int valor, dia, hora, minuto;
  cout << "Entre com o valor em segundos:";
  cin >> valor;
  dia = valor / 86400;
  hora = valor / 3600;
  minuto = valor / 60;
  cout << "Valor em dia:" << dia;
  cout << "\n";
  cout << "Valor em hora:" << hora;
  cout << "\n";
  cout << "Valor em minuto:" << minuto;
  cout << "\n";
  return 0;
}