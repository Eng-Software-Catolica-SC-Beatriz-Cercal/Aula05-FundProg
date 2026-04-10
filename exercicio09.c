#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int numero1, numero2, soma, sub, mult, opc;
    float div;
    //Quais são as entradas de dados?
    printf("Digite o primeiro valor:");
    scanf("%d", &numero1);
    fflush(stdin);
     printf("Digite o segundo valor:");
    scanf("%d", &numero2);
    fflush(stdin);
    system("cls"); //Limpeza de tela

    printf("Selecione uma opcao:");
    printf("[1] Adicao;\n");
    printf("[2] Subtracao;\n");
    printf("[3] Multiplicacao;\n");
    printf("[4] Divisao;\n");
    printf("[5] Fim.\n");

    scanf("%d", &opc);
    fflush(stdin);
    system("cls"); //Limpeza de tela



    //Processamento e saída de dados:
    	switch(opc){
		case 1:
            soma = numero1+numero2;
			printf("Resultado da Soma:", &soma);
			break;
		case 2:
            sub = numero1-numero2;
			printf("Resultado da Subtracao:", &sub);
			break;
        case 3:
            mult = numero1*numero2;
			printf("Resultado da Multiplicacao:", &mult);
			break;
        case 4:
			printf("Resultado da Divisao:", &div);
			break;
		
		default:
			printf("Opcao invalida\n");
	}
	
	return 0;

}