#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int operacao;
    //Quais são as entradas de dados?
    printf("Escolha uma opcao:");
    printf("1- Soma;");
    printf("2- Subtracao;");
    printf("3- Multiplicacao;");
    printf("4- Divisao;");
    scanf("%d", &operacao);
    fflush(stdin);
    //Processamento e saída de dados:
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