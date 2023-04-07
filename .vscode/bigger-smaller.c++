#include <iostream>
using namespace std;

int main()
{
    int numero1, numero2, numero3;
    cout << "Diferenciar dentre 3 números, qual é o maior e qual é o menor.\n\n";
    cout << "Digite o primeiro número: ";
    cin >> numero1;
    cout << "Digite o segundo número : ";
    cin >> numero2;
    cout << "Digite o terceiro número: ";
    cin >> numero3;
50
    if (numero1 > numero2 && numero1 > numero3)
    {
        cout << "O maior numero é o primeiro: " << numero1;
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        cout << "O maior numero é o segundo: " << numero2;
    }
    else
    {
        cout << "O maior numero é o terceito: " << numero3;
    }

    return 0;
}