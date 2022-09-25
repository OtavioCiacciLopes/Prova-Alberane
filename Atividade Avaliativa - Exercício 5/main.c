#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#define SIZE 200


char nome[SIZE][50];
char email[SIZE][50];
int telefone[SIZE];
int op;

 
void cadastro();
void pesquisa();
void lista();
int main(void) {
     
    setlocale(LC_ALL, "Portuguese");

	do{

		system("cls");
		printf("\n----Menu-----\n1 - Cadastrar\n2 - Listar Todos\n3 - Pesquisar\n4 - Sair ");
		scanf("%d",&op);
		switch(op) {
			case 1:
				cadastro();
				break;
			case 2:
			    lista();
			    break;
			case 3:
			    pesquisa();
			    break;
		    case 4:
		    	system("exit");
		    	break;
			default:
			    printf("\nOpção invalida\n");
			    break;				
		}
	}while(op!=4);
}

void lista() {
	setlocale(LC_ALL, "Portuguese");
	int i;
	for(i=0;i<SIZE;i++) {
		if(telefone[i]>0) {
			printf("\nNome: %s\nEmail: %s\ntelefone: %d",nome[i],email[i],telefone[i]);
	    }else{
	    	break;
		}
	}
	getchar();
	getchar();
}

void cadastro() {
	setlocale(LC_ALL, "Portuguese");
	static int linha;
	do{
		printf("\nDigite o nome: ");
		scanf("%s", &nome[linha]);
		printf("\nDigite o email: ");
		scanf("%s",&email[linha]);
		printf("\nDigite o telefone: ");
		scanf("%d",&telefone[linha]);
		printf("\nDigite 1 para continuar ou outro valor para sair ");
		scanf("%d",&op);
		linha++;
	}while(op==1);
} 

void pesquisa() {
	setlocale(LC_ALL, "Portuguese");
	int telefonePesquisa;
	char emailPesquisa[50];
	int i;
	do{
		printf("\nDigite 1 para pesquisar por telefone ou 2 para pesquisar por email ");
		scanf("%d", &op);
		switch(op) {
			case 1:
				printf("\nDigite o telefone: ");
				scanf("%d", &telefonePesquisa);
				for(i=0;i<SIZE;i++) {
					if(telefone[i]==telefonePesquisa) {
						printf("\nNome: %s\nEmail: %s\ntelefone: %d",nome[i],email[i],telefone[i]);
					}
				}
				break;
			case 2:
			    printf("\nDigite o E-mail: ");
			    scanf("%s",emailPesquisa);
			    for(i=0;i<SIZE;i++) {
					if(strcmp(email[i], emailPesquisa)==0) {
						printf("\nNome: %s\nEmail: %s\ntelefone: %d",nome[i],email[i],telefone[i]);
					}
				}
			    break;
			default:
			    printf("\nOpcão invalida\n");
			    break;		
		}
		printf("\nDigite 1 para continuar pesquisando ");
		scanf("%d",&op);
	}while(op==1);
	
}