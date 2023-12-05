//Esse programa funciona como um caixa eletrônico, o usuário digita quanto deseja sacar e o programa retorna essa quantidade no número de notas possíveis.

#include <stdio.h>

main(){

	//vari�veis
	int valor, resto, cem, cinquenta, vinte, dez, cinco, dois, um;
	
	//corpo do programa
	printf("Informe o valor que voce deseja calcular no menor numero de notas possiveis: ");
	scanf("%i" , &valor);
	
	cem=valor/100;
	resto=valor%100;
	
	cinquenta=resto/50;
	resto=valor%50;
	
	vinte=resto/20;
	resto=resto%20;
	
	dez=resto/10;
	resto=resto%10;
	
	cinco=resto/5;
	resto=resto%5;
	
	dois=resto/2;
	resto=resto%2;
	
	um=resto;
	
	printf("%i nota(s) de cem reais.\n" , cem);
	printf("%i nota(s) de cinquenta reais.\n" , cinquenta);
	printf("%i nota(s) de vinte reais.\n" , vinte);
	printf("%i nota(s) de dez reais.\n" , dez);
	printf("%i nota(s) de cinco reais.\n", cinco);
	printf("%i nota(s) de dois reais.\n", dois);
	printf("%i moedas(s) de um real." , um);	

}
