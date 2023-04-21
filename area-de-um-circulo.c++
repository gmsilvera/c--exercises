/*Faça um programa em C++ que calcule a área de um circulo que foi informado o raio.*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
  float pi, raio, area;
  pi = 3.14159;
  cout << "Entre com o raio:";
  cin >> raio;
  area = pi * raio * raio;
  cout << "Area e:" << area;
  return 0;
}