#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int operacao;
    //Quais são as entradas de dados?
    printf("Escolha uma opcao:");
    printf("1- Soma;\n");
    printf("2- Subtracao;\n");
    printf("3- Multiplicacao;\n");
    printf("4- Divisao;\n");
    scanf("%d", &operacao);
    fflush(stdin);
    //Processamento e saída de dados:
        system("cls"); //Limpeza de tela
    	switch(operacao){
		case 1:
			printf("Soma: Adicao entre dois valores.\n");
			break;
		case 2:
			printf("Subtracao: Diferenca entre dois valores.\n");
			break;
        case 3:
			printf("Multiplicacao: Produto de dois valores.\n");
			break;
        case 4:
			printf("Divisao: Reparticao entre dois valores.\n");
			break;
		default:
			printf("Valor invalido\n");
	}
	
	return 0;

}