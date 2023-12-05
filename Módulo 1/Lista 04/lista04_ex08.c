/*
   FAC - Turma B
   Data: 17/09/2020
   
   QUEST�O 08:
   Fazer um programa que auxilie o org�o regulador no c�lculo do total de recursos 
   arrecadados com a aplica��o de multas de tr�nsito. 
   O programa deve ler as seguintes informa��es para cada motorista: 
   	- O n�mero da carteira de motorista;
 	- N�mero de multas;
 	- Valor de cada uma das multas. 

   Deve ser exibido o valor da d�vida de cada motorista e ao final da leitura o total de 
   recursos arrecadados (somat�rio de todas as multas). 
   O programa tamb�m dever� apresentar o n�mero da carteira do motorista que obteve o 
   maior n�mero de multas. 
*/

//importa��o de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declara��o de vari�veis
	int i, cnh, nMultas, maior = -1, maiorCNH;
	float valor, soma, total = 0;
	char opcao;
	
	do
	{
		//lendo os dados de cada motorista
		printf ("CNH: ");
		scanf ("%d", &cnh);
		
		printf ("Numero de multas: ");
		scanf ("%d", &nMultas);
		
		soma = 0;
		
		//lendo o valor de cada multa
		for (i=1;i<=nMultas;i++)
		{
			printf ("Valor da %da. multa: ", i);
			scanf ("%f", &valor);
			
			//calculando o valor devido pelo motorista
			soma += valor;
		}
		
		//exibindo a d�vida do motorista
		printf ("\tDivida do motorista de cnh %d: R$ %.2f\n", cnh, soma);
		
		//calculando o total a ser arrecadado
		total += soma;		
		
		//determinando o motorista que teve o maior n�mero de multas
		if (nMultas > maior)
		{
			maior = nMultas;
			maiorCNH = cnh;
		}
	
		//verificar se o usu�rio deseja continuar
		do
		{
			printf ("\nDeseja continuar [S/N]? ");
			fflush (stdin);
			scanf ("%c", &opcao);
			opcao = toupper (opcao);
			
			//enviando msg ao usu�rio caso a op��o seja inv�lida
			if ((opcao != 'S') && (opcao != 'N'))
			{
				printf ("\tErro: opcao invalida! Tente novamente.\n");
			}
		}
		while ((opcao != 'S') && (opcao != 'N'));

	}
	while (opcao == 'S');
	
	//exibindo os resultados
	printf ("\n\nTotal arrecadado com multas: R$ %.2f", total);
	printf ("\nO motorista de cnh = %d foi o que obteve o maior numero de multas (%d)", maiorCNH, maior);
}
