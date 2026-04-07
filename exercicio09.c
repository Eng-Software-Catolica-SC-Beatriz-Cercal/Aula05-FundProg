#include <stdio.h>
#include <stdlib.h>
 
int main(void){
    //Variáveis
    int numero1, numero2, soma, sub, mult;
    float div;
    //Quais são as entradas de dados?
    printf("Digite o primeiro valor:");
    scanf("%d", &numero1);
    fflush(stdin);
     printf("Digite o segundo valor:");
    scanf("%d", &numero2);
    fflush(stdin);

     printf("Digite o primeiro valor:");
    scanf("%d", &numero1);
    fflush(stdin);

    
    //Processamento e saída de dados:
    	switch(numero){
		case 1:
			printf("Domingo\n");
			break;
		case 2:
			printf("Segunda-Feira\n");
			break;
        case 3:
			printf("Terca-Feira\n");
			break;
        case 4:
			printf("Quarta-Feira\n");
			break;
        case 5:
			printf("Quinta-Feira\n");
			break;
        case 6:
			printf("Sexta-Feira\n");
			break;
        case 7:
			printf("Sabado\n");
			break;
		
		default:
			printf("Valor invalido\n");
	}
	
	return 0;

}