/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 14/06/2021   -   Atividade 8
	
	Quest�o 07 (Lista IX):

	Desenvolver uma fun��o que, dados dois
	arquivos textos arqA e arqB, crie um novo arquivo arqC, considerando que:
	
	- arqA e arqB cont�m n�meros reais, um por linha,
	ordenados crescentemente e sem repeti��o no arquivo;
	
	- arqC deve conter
	apenas os n�meros comuns aos dois arquivos originais;
	
	- Assim como arqA e arqB, arqC tamb�m n�o possuir� repeti��es de
	elementos e estes dever�o estar ordenados de forma crescente.
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipo das fun��es

int numerosComuns (char arqA[], char arqB[], char arqC[]);

void main (){
	
	//declara��o de vari�veis
	char arqA[10], arqB[10];
	
	//lendo o nome do primeiro arquivo
	printf ("Entre com o nome do primeiro arquivo: ");
	gets (arqA);
	
	//lendo o nome do segundo arquivo
	printf ("Entre com o nome do segundo arquivo: ");
	gets (arqB);

	//chamando a fun��o
	printf ("\nResultado: %d", numerosComuns (arqA, arqB, "numerosComuns.txt"));
		
}

//implementa��o das fun��es
int numerosComuns (char arqA[], char arqB[], char arqC[]){
	
	//declara��o de vari�veis
	FILE *arq1, *arq2, *arq3;
	float numero, numero2;
	int continuar = 1;
	
	//abertura dos arquivos
	arq1 = fopen (arqA, "r");
	arq2 = fopen (arqB, "r");
	arq3 = fopen (arqC, "w");
	
	//testando se os arquivos foram abertos ou n�o
	if ((!arq1) || (!arq2) || (!arq3)){
		
		return 0;
		
	} 
	
	else{
		
		//while para ler mais que um n�mero no arq1
		while (continuar == 1){
			
			continuar = 0;
			
			while (fscanf (arq1, "%f", &numero) != EOF){
			
				while (fscanf (arq2, "%f", &numero2) != EOF){
						
					//verificando se o n�mero em arq1 � igual ao n�mero em arq2
					if (numero == numero2){
							
						fprintf (arq3, "%.1f\n", numero);
							
						continuar = 1;
						
					}
					
				}
				
				//abrindo o arq2 mais uma vez para a segunda rodada do while do arq1
				arq2 = fopen (arqB, "r");
			
			}
				
			//"rebobinando" o arquivo arq2
			rewind (arq2);
			
		}
					
			//fechando os arquivos
			fclose (arq1);
			fclose (arq2);
			fclose (arq3);
			
			return 1;
		
	}
		
}
	


