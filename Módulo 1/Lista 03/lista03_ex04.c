/*QUEST�O 04: Fa�a um programa que leia 300 n�meros reais. Ao final, devem ser exibidas as seguintes informa��es:a) A quantidade de valores negativos digitados;b) A m�dia dos valores positivos.*/

#include <stdio.h>

void main (){
	
	//vari�veis
	
	int i, num, numNeg, numPos, QnumNeg, QnumPos, novoNumPos;
	float divPos;
	
	//declara��o de valores das vari�veis
	
	QnumNeg=0;
	QnumPos=0;
	
	//informa��es
	
	for(i=1; i<=300; i++){
		printf("Informe um numero: ");
		scanf("%i" , &num);
		
		if(num<0){
			numNeg=num;
			
			//contando quantos n�meros negativos possui
			
			QnumNeg=QnumNeg+1;
		}else{
			numPos=num;
			
			//contando quantos n�meros positivos possui
			
			QnumPos=QnumPos+1;
			
			//somando n�meros positivos
			
			novoNumPos=novoNumPos+numPos;
			
			//dividindo a soma dos n�meros positivos pela quantidade de n�meros positivos para saber a m�dia
			
			divPos=novoNumPos/QnumPos;
		}
	}
	
	printf("Possui %d numeros negativos e a media dos numeros positivos e %1.f" , QnumNeg, divPos);
}
