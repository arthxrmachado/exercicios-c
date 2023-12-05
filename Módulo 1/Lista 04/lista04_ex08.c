/*
   FAC - Turma B
   Data: 17/09/2020
   
   QUESTÃO 08:
   Fazer um programa que auxilie o orgão regulador no cálculo do total de recursos 
   arrecadados com a aplicação de multas de trânsito. 
   O programa deve ler as seguintes informações para cada motorista: 
   	- O número da carteira de motorista;
 	- Número de multas;
 	- Valor de cada uma das multas. 

   Deve ser exibido o valor da dívida de cada motorista e ao final da leitura o total de 
   recursos arrecadados (somatório de todas as multas). 
   O programa também deverá apresentar o número da carteira do motorista que obteve o 
   maior número de multas. 
*/

//importação de bibliotecas
#include <stdio.h>

//main
void main ()
{
	//declaração de variáveis
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
		
		//exibindo a dívida do motorista
		printf ("\tDivida do motorista de cnh %d: R$ %.2f\n", cnh, soma);
		
		//calculando o total a ser arrecadado
		total += soma;		
		
		//determinando o motorista que teve o maior número de multas
		if (nMultas > maior)
		{
			maior = nMultas;
			maiorCNH = cnh;
		}
	
		//verificar se o usuário deseja continuar
		do
		{
			printf ("\nDeseja continuar [S/N]? ");
			fflush (stdin);
			scanf ("%c", &opcao);
			opcao = toupper (opcao);
			
			//enviando msg ao usuário caso a opção seja inválida
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
