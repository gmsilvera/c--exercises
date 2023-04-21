/*Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5%
para o sindicato, faça um programa que nos dê: salário bruto. quanto pagou ao
INSS. quanto pagou ao sindicato. O salário líquido. Calcule os descontos e o
salário líquido, conforme a tabela abaixo:

Salário Bruto : R$ IR (11%) : R$
INSS (8%) : R$
Sindicato ( 5%) : R$
Salário Liquido : R$
Obs.: Salário Bruto - Descontos = Salário Líquido.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  float valor_hora, qtd_hora, sal_bruto, sal_liquido, ir, inss, sindicato;
  cout << "Entre com valor hora:";
  cin >> valor_hora;
  cout << "Entre com qtd hora:";
  cin >> qtd_hora;
  sal_bruto = valor_hora * qtd_hora;
  cout << "Salario bruto:" << sal_bruto;
  cout << "\n";
  ir = (valor_hora * qtd_hora) * 11 / 100;
  cout << "IR:" << ir;
  cout << "\n";
  inss = (valor_hora * qtd_hora) * 8 / 100;
  cout << "INSS:" << inss;
  cout << "\n";
  sindicato = (valor_hora * qtd_hora) * 5 / 100;
  cout << "SINDICATO:" << sindicato;
  cout << "\n";
  sal_liquido = sal_bruto - ir - inss - sindicato;
  cout << "Salario Liquido:" << sal_liquido;
  return 0;
}