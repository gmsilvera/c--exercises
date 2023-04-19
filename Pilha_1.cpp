#include <iostream>
#include <stdlib.h>
using namespace std;
int vet[10];
int ini=0,fim=0,tam=9;

int teste_lotado(int n)
	{ 	
	if(fim > tam){
		return 0;
	}
	else{
		return 1;		
	}
}

int teste_vazio(int n){
	if(fim == 0){
		return 0;
	}
	else{
		return 1;
	}
}

int consultar(int n)
	{
	if(teste_vazio(1) == 0){
		cout << "Impossivel consultar pilha vazia";
	}
	else{ 
		for(int x=fim-1;x>=ini;x--){
			cout << "Valor["<<x<<"]:" << vet[x];
			cout << "\n";
		}
	}
}

int incluir(int n){ 
	if(teste_lotado(1) == 0){
		cout << "Impossivel incluir pilha lotada";
	}
	else{
		cout << "Entre com o valor:";
		cin >> vet[fim];
		fim = fim + 1;
		consultar(1);
	}
}

int excluir(int n){
	if(teste_vazio(1) == 0){
		cout << "Impossivel excluir pilha vazia";
	}
	else{
		fim = fim -1;
		consultar(1);
	}
}




int main()
{
    int opcao = 1;

    while(opcao != 0){
	
	    cout <<"####### CADASTRO DE CLIENTES #######\n \n";
	    cout <<"|||||||||||||||||||||||||||||||||||||\n\n";
	    cout <<"MENU\n\n";
	
	    cout <<"0 - Fim \n";
	    cout <<"1 - Inclui pilha \n";
	    cout <<"2 - Exclui pilha \n";
	    cout <<"3 - Consulta pilha \n";
	    cout <<"\n";
	    cout <<"Opcao:";
	    cin >>opcao;
	
	    if (opcao == 0){ 
	       cout << "Fim do cadastro";
	    }
	    if (opcao == 1){ 
	       incluir(1);
	    }
	    if (opcao == 2){ 
	       excluir(1);	       
	    }
	    if (opcao == 3){ 
	       consultar(1);
	    }
	    if (opcao > 3){ 
	       cout <<"Opçao Invalida";
	    }

	    system("PAUSE");
	    system("cls");
	}
	system("PAUSE");
    return 0;
}