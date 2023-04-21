/*Faça um programa em C++ para ler o preço de compra e o percentual de lucro
 * desejado por um vendedor e calcular o preço de venda.*/

#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main() {
  float compra, percen, preco_venda;
  cout << "Entre com o preco de compra:";
  cin >> compra;
  cout << "Entre com o % de lucro:";
  cin >> percen;
  preco_venda = compra + compra * percen / 100;
  cout << "Preco de venda e: " << preco_venda;
  return 0;
}