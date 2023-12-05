/*
	FAC - Turma B - 03/09/2020
	
    QUEST�O 08: Em uma empresa deseja-se fazer um levantamento 
	sobre algumas informa��es dos seus 250 funcion�rios. 
	Cada funcion�rio dever� responder um question�rio ao qual 
	informar� os seguintes dados: matr�cula, g�nero, idade, 
	sal�rio e tempo (em anos) de trabalho na empresa. 
	A execu��o do programa deve exibir os seguintes itens:

    a) Quantidade de funcion�rios que ingressaram na empresa 
	   com menos de 21 anos;
    b) Quantidade de funcion�rios do g�nero feminino;
    c) M�dia salarial dos homens;
    d) Matr�cula dos funcion�rios mais antigo e mais novo.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define QUANT 3

//main
void main ()
{
	//declara��o de vari�veis
	int i, mat, tempo, idade, cont21 = 0, 
	    contF = 0, contM = 0, maiorTempo = 0,
		menorTempo = 100, matMaiorTempo, matMenorTempo;
	char genero;
	float salario, somaSalM = 0, mediaSalM;
	
	//variando os 250 funcion�rios da empresa
	for (i=0;i<QUANT;i++)
	{
		//lendo os dados de cada funcion�rio
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
		
		//Quantidade de funcion�rios que ingressaram na empresa 
		//com menos de 21 anos
		if ((idade - tempo) < 21)
		{
			cont21++;
		}
		
		//Quantidade de funcion�rios do g�nero feminino
		if (genero == 'F')
		{
			contF++;
		}
		else
		{
			//calculando a soma dos sal�rios dos homens
			somaSalM = somaSalM + salario;  //somaSalM += salario;
			contM++;
		}
		
		//Matr�cula do funcion�rio mais antigo na empresa
		if (tempo > maiorTempo)
		{
			maiorTempo = tempo;
			matMaiorTempo = mat;
		}
		
		//Matr�cula do funcion�rio que est� h� menos tempo na empresa
		if (tempo < menorTempo)
		{
			menorTempo = tempo;
			matMenorTempo = mat;
		}
	}
	
	//calculando a m�dia de sal�rio dos homens
	mediaSalM = somaSalM/contM;
	
	//Exibindo os resultados
	printf ("\n\nQuantidade de funcion�rios que ingressaram com menos de 21 anos: %d\n", cont21);
	printf ("Quantidade de funcion�rios do g�nero feminino: %d\n", contF);
	printf ("Media salarial dos homens: R$ %.2f\n", mediaSalM);
	printf ("Funcionario mais antigo da empresa: %d\n", matMaiorTempo);    
	printf ("Funcionario mais novo na empresa: %d\n", matMenorTempo);
}
