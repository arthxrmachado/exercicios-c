// Com base no saldo de um cliente, o programa determina quando de crédito o mesmo receberá.

#include <stdio.h>

main(){

	//variáveis
	float saldo, credito;

	//corpo do programa
	printf("Escreva o saldo medio de um determinado cliente: ");
	scanf("%f" , &saldo);
	
	if(saldo<1000){
		printf("\nO cliente nao recebera nenhum credito.");

	} else if (saldo<1500){
		credito=saldo*0.2;
		printf("\nO cliente recebera 20%% de credito: %0.2f" , credito);

	} else if (saldo<2500){
		credito=saldo*0.3;
		printf("\nO cliente recebera 30%% de credito: %0.2f" , credito);

	} else if (saldo>=2500){
		credito=saldo*0.4;
		printf("\nO cliente recebera 40%% de credito: %0.2f" , credito);
		
	}

}
