/*
	FPR - Fundamentos de Programa��o
	2021/1 - Manh�
	Data: 02/06/2021
	
	Lista de Exerc�cios IX (Arquivos):
	
	Quest�o 05:
	Fa�a uma fun��o que, dado um arquivo A contendo n�meros reais, um por linha, crie 
	um novo arquivo B contendo os mesmos elementos de A, por�m ordenados 
	decrescentemente e sem repeti��o.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define TRUE 1
#define FALSE 0

#define MAXIMO 99999
#define MINIMO -99999

//declara��o de prot�tipos
int gerarArquivoOrdenado (char origem[], char destino[]);

//main
void main ()
{
	printf ("Resultado: %d\n", gerarArquivoOrdenado ("teste.txt", "ordenado.txt"));
}

//implementa��o das fun��es
int gerarArquivoOrdenado (char origem[], char destino[])
{
	//declara��o de vari�veis
	FILE *arqO, *arqD;
	float maior, numero, ultimo = MAXIMO;
	int continuar = TRUE;
	
	//associar as vari�veis do tipo FILE* aos nomes dos arquivos e abri-los
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
			
			//inicializando 'maior' com um n�mero muito baixo
			maior = MINIMO;
			
			//lendo os valores do arquivo at� chegar ao seu final
			while (fscanf (arqO, "%f", &numero) != EOF)
			{
				//verificando se: i. o numero lido � menor do que o ultimo valor colocado 
				//no novo arquivo; ii. se o numero lido � o maior at� o momento!
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
