/*
  FAC - Turma B - 2020/1
  Professor Leonardo Vianna
  
  Lista de Exerc�cios IX:
  
  QUEST�O 03:
  Fazer uma fun��o leituraDados que permane�a lendo valores 
  reais at� que o n�mero 0 seja digitado. Ao final, a fun��o 
  deve determinar a quantidade de elementos fornecidos 
  (excluindo o 0) e o maior dentre eles.
*/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipos das fun��es
void leituraDados (int *quant, float *maior);

//main
void main ()
{
	//declara��o de vari�veis
	int quantidade;
	float maior;
	
	//chamando a fun��o
	leituraDados (&quantidade, &maior);
	
	//exibindo os resultados
	printf ("Quantidade: %d\nMaior: %.1f\n", quantidade, maior);	
}

//implementa��o das fun��es
void leituraDados (int *quant, float *maior)
{
	//declara��o de vari�veis	
	float n, ma=-99999;
	int cont=0;
	
	do
	{
		//lendo os valores
		printf("Entre com um valor. Digite zero para sair. ");
		scanf("%f", &n);
		
		//atualizando a quantidade de elementos fornecidos
		//if (n != 0)
		//{
			cont++;
		//}
		
		//verificando se o n�mero rec�m fornecido � o maior de todos
		if (n > ma)
		{
			ma = n;
		}
	}
	while (n!=0);
	
	//retornando os resultados
	*maior = ma;
	*quant = cont-1;
}
