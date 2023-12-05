// Com base na idade de um nadador, o programa calcula a categoria que o mesmo faz parte.

#include <stdio.h>

main(){

	//variáveis
	int idade;
	
	//corpo do programa
	printf("Escreva a idade de um nadador: ");
	scanf("%i", &idade);
	
	if(idade<=4){
		printf("Esse nadador faz parte da categoria infantil A.");
	}
	else if(idade<=7){
		printf("Esse nadador faz parte da categoria infantil B.");
	}
	else if(idade<=10){
		printf("Esse nadador faz parte da categoria infantil C.");
	}
	else if(idade<=13){
		printf("Esse nadador faz parte da categoria juvenil A.");
	}
	else if(idade<=17){
		printf("Esse nadador faz parte da categoria juvenil B.");
	}
	else{
		printf("Esse nadador faz parte da categoria adulto.");
	}

}
