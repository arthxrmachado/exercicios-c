/*QUESTAO 02: Escrever um algoritmo que obtenha o peso de uma 
pessoa na Terra e o numero de um planeta. Ao final, com auxilio 
da tabela abaixo, calcular o peso desta pessoa no planeta 
escolhido.

Numero 	Planeta 	Gravidade Relativa g
1 		Mercurio 	0,37
2 		Venus 		0,88
3 		Marte 		0,38
4 		Jupiter 	2,64
5 		Saturno 	1,15
6 		Urano 		1,17

Para calcular o peso no planeta escolhido, utilize a seguinte 
formula:

		pesoPlaneta = (pesoTerra/10) * gravidadePlaneta
*/

//importacao de bibliotecas
#include <stdio.h>

void main ()
{
	//declaracao de variaveis
	float pTerra, pPlaneta, grav;
	int numPlaneta;
	
	//leitura dos dados de entrada
	printf ("Peso da pessoa na terra: ");
	scanf ("%f", &pTerra);

	printf ("1 - Mercurio\n2 - Venus\n3 - Marte\n4 - Jupiter\n5 - Saturno\n6 - Urano\n\n");
	printf ("Entre com o numero do planeta:\n\n");
	scanf ("%d", &numPlaneta);
	
	//determinando a gravidade do planeta escolhido
	switch (numPlaneta)
	{
		case 1: grav = 0.37;
		        break;
		        
		case 2: grav = 0.88;
			    break;
		
		case 3: grav = 0.38;
				break;
				 
		case 4: grav = 2.64;
				break;
				
		case 5: grav = 1.15;
				break;
				
		case 6: grav = 1.17;
		        //break;
		        
		default: printf ("Erro! Planeta invalido!!!");
	}
	
	//calcular o peso da pessoa no planeta escolhido
	pPlaneta = (pTerra/10) * grav;
	
	//exibindo o resultado
	printf ("O peso da pessoa no planeta escolhido eh %.2f kg", pPlaneta);
	
}
