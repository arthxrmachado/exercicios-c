// Dado o sexo e a altura de uma pessoa, o programa calcula seu peso ideal.

#include <stdio.h>

main (){
	//variáveis
	float altura, peso_ideal;
	char sexo;
	
	//corpo do programa
	printf("Digite seu sexo: (M/F)\n");
	scanf("%c" , &sexo);
	
	printf("\nDigite sua altura: \n");
	scanf("%f" , &altura);
	
	sexo=toupper(sexo);
	
	if(sexo=='M'){
		peso_ideal=(72.7*altura)-58;
		
		printf("\nO seu peso ideal e: %0.1f" , peso_ideal);
	}else if(sexo=='F'){
		peso_ideal=(62.1*altura)-44.7;
		
		printf("\nO seu peso ideal e: %0.1f" , peso_ideal);
	}

}
