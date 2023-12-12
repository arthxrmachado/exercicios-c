/*

QUESTÃO 05: Faça uma função que, dado um arquivo A contendo números reais, um por linha, crie um novo arquivo B contendo os mesmos elementos de A, porém 
ordenados decrescentemente e sem repetição.
 
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define TRUE 1
#define FALSE 0

#define MAXIMO 99999
#define MINIMO -99999

//declaração de protótipos
int gerarArquivoOrdenado (char origem[], char destino[]);

//main
void main ()
{
	printf ("Resultado: %d\n", gerarArquivoOrdenado ("teste.txt", "ordenado.txt"));
}

//implementação das funções
int gerarArquivoOrdenado (char origem[], char destino[])
{
	//declaração de variáveis
	FILE *arqO, *arqD;
	float maior, numero, ultimo = MAXIMO;
	int continuar = TRUE;
	
	//associar as variáveis do tipo FILE* aos nomes dos arquivos e abri-los
	arqO = fopen (origem, "r"); //r - read (leitura)
	arqD = fopen (destino, "w");//w - write (escrita) 
	
	//verificando se houve erro na abertura dos arquivos
	if ((!arqO) || (!arqD))
	{
		return FALSE;
	}
	else
	{
		//while (continuar == TRUE)
		while (continuar)
		{
			continuar = FALSE;			
			
			//inicializando 'maior' com um número muito baixo
			maior = MINIMO;
			
			//lendo os valores do arquivo até chegar ao seu final
			while (fscanf (arqO, "%f", &numero) != EOF)
			{
				//verificando se: i. o numero lido é menor do que o ultimo valor colocado 
				//no novo arquivo; ii. se o numero lido é o maior até o momento!
				if ((numero < ultimo) && (numero > maior))
				{
					maior = numero;
					
					continuar = TRUE;
				}
			}
			
			if (continuar)
			{
				//escrevendo o 'maior' valor encontrado no novo arquivo 
				fprintf (arqD, "%.1f\n", maior);
			
				//atualizando o ultimo
				ultimo = maior;
				
				//"rebobinando" o arquivo
				rewind (arqO);
			}
		}
		
		//fechando os arquivos
		fclose (arqO);
		fclose (arqD);
		
		//retornando verdadeiro, informando que o arquivo foi gerado
		return TRUE;
	}
}
