// QUESTÃO 03: Fazer uma função recursiva que, dado um número inteiro N, exiba o mesmo na base 2 (binária).

//importação de bibliotecas
#include <stdio.h>

//protótipos das funções
void binario (int n);

//função main
void main ()
{
	//declaração de variáveis
	int num;
	
	//leitura dos dados
	printf ("Entre com o valor a ser transformado para a base 2: ");
	scanf ("%d", &num);
	
	//chamando a função	
  	binario (num);
}

//implementação das funções
void binario (int n)
{
  if(n >= 1)
  {
    binario(n/2);
    printf("%d", n%2);
  }
}
