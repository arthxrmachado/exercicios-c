/*QUESTÃO 04: Faça um programa que leia 300 números reais. Ao final, devem ser exibidas as seguintes informações:a) A quantidade de valores negativos digitados;b) A média dos valores positivos.*/

#include <stdio.h>

void main (){
	
	//variáveis
	
	int i, num, numNeg, numPos, QnumNeg, QnumPos, novoNumPos;
	float divPos;
	
	//declaração de valores das variáveis
	
	QnumNeg=0;
	QnumPos=0;
	
	//informações
	
	for(i=1; i<=300; i++){
		printf("Informe um numero: ");
		scanf("%i" , &num);
		
		if(num<0){
			numNeg=num;
			
			//contando quantos números negativos possui
			
			QnumNeg=QnumNeg+1;
		}else{
			numPos=num;
			
			//contando quantos números positivos possui
			
			QnumPos=QnumPos+1;
			
			//somando números positivos
			
			novoNumPos=novoNumPos+numPos;
			
			//dividindo a soma dos números positivos pela quantidade de números positivos para saber a média
			
			divPos=novoNumPos/QnumPos;
		}
	}
	
	printf("Possui %d numeros negativos e a media dos numeros positivos e %1.f" , QnumNeg, divPos);
}
