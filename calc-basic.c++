#include <iostream>
#include <math.h>
using namespace std;

void raizQuadrada(int numero1)
{
    cout << "Resultado da raizQuadrada: " << sqrt(numero1);
}
void multiplicacao(int numero1, int numero2)
{
    cout << "Resultado da multiplicacao: " << (numero1 * numero2);
}
void adicao(int numero1, int numero2)
{
    cout << "Resultado da adicao: " << (numero1 + numero2);
}
void divisao(int numero1, int numero2)
{
    cout << "Resultado da divisao: " << (numero1 / numero2);
}
void subtracao(int numero1, int numero2)
{
    cout << "Resultado da subtracao: " << (numero1 - numero2);
}
void potenciacao(int numero1, int numero2)
{
    cout << "Resultado da potenciacao: " << pow(numero1, numero2);
}

int main()
{
    float numero1, numero2;
    int operacao;

    cout << "#### Calculadora básica ####\n\n";
    cout << "Digite um número: ";
    cin >> numero1;
    cout << "Digite outro número: ";
    cin >> numero2;
    cout << "Escolha a operação:\n";
    cout << "1 -> Raiz Quadrada\n";
    cout << "2 -> Multiplicação\n";
    cout << "3 -> Adição\n";
    cout << "4 -> Dvisão\n";
    cout << "5 -> Subtração\n";
    cout << "6 -> Potenciação\n";
    cin >> operacao;
    cout << "Opção: " << operacao << "\n";

    switch (operacao)
    {
    case 1:
        raizQuadrada(numero1);
        break;
    case 2:
        multiplicacao(numero1, numero2);
        break;
    case 3:
        adicao(numero1, numero2);
        break;
    case 4:
        divisao(numero1, numero2);
        break;
    case 5:
        subtracao(numero1, numero2);
        break;
    case 6:
        potenciacao(numero1, numero2);
        break;
    default:
        cout << "Operação inexistente.";
        break;
    }
    return 0;
}