/*
   FAC - Turma B
   Data: 17/09/2020
   
   Lista V:
   
   QUEST�O 05: Elabore um programa que calcule a m�dia ponderada de n elementos.
   
   Observa��o: na m�dia ponderada, cada elemento possui um peso que representa a sua 
   contribui��o no c�lculo da m�dia final.
   
   			
   v1	8	peso: 1
   v2	5	peso: 4
   v3	15	peso: 2
   
		MP = (8x1) + (5x4) + (15x2)    58   
		     ---------------------- =  --- = 8.29
		            1+4+2               7

*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, n;
	float valor, peso, num = 0, den = 0, media;
	
	//lendo o numeros de valores a serem tratados no c�lculo da m�dia
	printf ("Quantos numeros comporao a media? ");
	scanf ("%d", &n);
	
	//lendo os n valores e seus pesos
	for (i=1;i<=n;i++)
	{
		printf ("%do. valor: ", i);
		scanf ("%f", &valor);
		
		printf ("%do. peso: ", i);
		scanf ("%f", &peso);
		
		//calculando o numerador e o denominador
		num += valor*peso;
		den += peso;
	}
	
	//calculando o valor da m�dia
	media = num/den;
	
	//exibindo o resultado
	printf ("\n\nMedia = %.2f", media);
}
