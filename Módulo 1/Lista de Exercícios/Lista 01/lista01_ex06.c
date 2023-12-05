//Com base na data que o usário digitar, o programa retorna o dia exato do ano.

#include <stdio.h>

main (){

	//variáveis
	int dia, mes, dia_ano;
	
	//corpo do programa
	printf("Escreva o dia desejado: ");
	scanf("%i" , &dia);
	
	printf("Escreva o numero do mes desejado: ");
	scanf("%i" , &mes);
	
	if(mes==1){
		dia_ano=dia;
		printf("%i/01 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==2){
		dia_ano=28+dia;
		printf("%i/02 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==3){
		dia_ano=59+dia;
		printf("%i/03 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==4){
		dia_ano=89+dia;
		printf("%i/04 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==5){
		dia_ano=120+dia;
		printf("%i/05 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==6){
		dia_ano=150+dia;
		printf("%i/06 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==7){
		dia_ano=181+dia;
		printf("%i/07 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==8){
		dia_ano=212+dia;
		printf("%i/08 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==9){
		dia_ano=242+dia;
		printf("%i/9 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==10){
		dia_ano=273+dia;
		printf("%i/10 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==11){
		dia_ano=303+dia;
		printf("%i/11 - %i dia do ano. ", dia, dia_ano);
		
	}else if(mes==12){
		dia_ano=334+dia;
		printf("%i/12 - %i dia do ano. ", dia, dia_ano);
		
	}
	
}
