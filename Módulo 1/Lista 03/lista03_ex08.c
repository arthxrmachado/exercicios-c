/*
	FAC - Turma B - 03/09/2020
	
    QUESTÃO 08: Em uma empresa deseja-se fazer um levantamento 
	sobre algumas informações dos seus 250 funcionários. 
	Cada funcionário deverá responder um questionário ao qual 
	informará os seguintes dados: matrícula, gênero, idade, 
	salário e tempo (em anos) de trabalho na empresa. 
	A execução do programa deve exibir os seguintes itens:

    a) Quantidade de funcionários que ingressaram na empresa 
	   com menos de 21 anos;
    b) Quantidade de funcionários do gênero feminino;
    c) Média salarial dos homens;
    d) Matrícula dos funcionários mais antigo e mais novo.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define QUANT 3

//main
void main ()
{
	//declaração de variáveis
	int i, mat, tempo, idade, cont21 = 0, 
	    contF = 0, contM = 0, maiorTempo = 0,
		menorTempo = 100, matMaiorTempo, matMenorTempo;
	char genero;
	float salario, somaSalM = 0, mediaSalM;
	
	//variando os 250 funcionários da empresa
	for (i=0;i<QUANT;i++)
	{
		//lendo os dados de cada funcionário
		printf ("Matricula: ");
		scanf ("%d", &mat);
		
		printf ("Genero (M/F): ");
		fflush (stdin);
		scanf ("%c", &genero);
		genero = toupper (genero);
		
		printf ("Idade: ");
		scanf ("%d", &idade);
		
		printf ("Salario: ");
		scanf ("%f", &salario);
		
		printf ("Tempo (em anos) de trabalho na empresa: ");
		scanf ("%d", &tempo); 		
		
		//Quantidade de funcionários que ingressaram na empresa 
		//com menos de 21 anos
		if ((idade - tempo) < 21)
		{
			cont21++;
		}
		
		//Quantidade de funcionários do gênero feminino
		if (genero == 'F')
		{
			contF++;
		}
		else
		{
			//calculando a soma dos salários dos homens
			somaSalM = somaSalM + salario;  //somaSalM += salario;
			contM++;
		}
		
		//Matrícula do funcionário mais antigo na empresa
		if (tempo > maiorTempo)
		{
			maiorTempo = tempo;
			matMaiorTempo = mat;
		}
		
		//Matrícula do funcionário que está há menos tempo na empresa
		if (tempo < menorTempo)
		{
			menorTempo = tempo;
			matMenorTempo = mat;
		}
	}
	
	//calculando a média de salário dos homens
	mediaSalM = somaSalM/contM;
	
	//Exibindo os resultados
	printf ("\n\nQuantidade de funcionários que ingressaram com menos de 21 anos: %d\n", cont21);
	printf ("Quantidade de funcionários do gênero feminino: %d\n", contF);
	printf ("Media salarial dos homens: R$ %.2f\n", mediaSalM);
	printf ("Funcionario mais antigo da empresa: %d\n", matMaiorTempo);    
	printf ("Funcionario mais novo na empresa: %d\n", matMenorTempo);
}
