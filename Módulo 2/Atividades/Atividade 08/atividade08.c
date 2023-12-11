/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 14/06/2021   -   Atividade 8
	
	Questão 07 (Lista IX):

	Desenvolver uma função que, dados dois
	arquivos textos arqA e arqB, crie um novo arquivo arqC, considerando que:
	
	- arqA e arqB contém números reais, um por linha,
	ordenados crescentemente e sem repetição no arquivo;
	
	- arqC deve conter
	apenas os números comuns aos dois arquivos originais;
	
	- Assim como arqA e arqB, arqC também não possuirá repetições de
	elementos e estes deverão estar ordenados de forma crescente.
	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//protótipo das funções

int numerosComuns (char arqA[], char arqB[], char arqC[]);

void main (){
	
	//declaração de variáveis
	char arqA[10], arqB[10];
	
	//lendo o nome do primeiro arquivo
	printf ("Entre com o nome do primeiro arquivo: ");
	gets (arqA);
	
	//lendo o nome do segundo arquivo
	printf ("Entre com o nome do segundo arquivo: ");
	gets (arqB);

	//chamando a função
	printf ("\nResultado: %d", numerosComuns (arqA, arqB, "numerosComuns.txt"));
		
}

//implementação das funções
int numerosComuns (char arqA[], char arqB[], char arqC[]){
	
	//declaração de variáveis
	FILE *arq1, *arq2, *arq3;
	float numero, numero2;
	int continuar = 1;
	
	//abertura dos arquivos
	arq1 = fopen (arqA, "r");
	arq2 = fopen (arqB, "r");
	arq3 = fopen (arqC, "w");
	
	//testando se os arquivos foram abertos ou não
	if ((!arq1) || (!arq2) || (!arq3)){
		
		return 0;
		
	} 
	
	else{
		
		//while para ler mais que um número no arq1
		while (continuar == 1){
			
			continuar = 0;
			
			while (fscanf (arq1, "%f", &numero) != EOF){
			
				while (fscanf (arq2, "%f", &numero2) != EOF){
						
					//verificando se o número em arq1 é igual ao número em arq2
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
	


