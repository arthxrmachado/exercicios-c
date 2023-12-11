/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 24/05/2021   -   Atividade 4
	
	Questão 01:	
	
	Desenvolver uma função recursiva que, dada uma string s, altere-a de forma 
	que as letras fiquem em seu início e os demais caracteres ao final, como 
	nos exemplos a seguir:
	
	Exemplo 1:
	Inicialmente: X*7D2SFH1
	Ao final: XHFDS27*1

	Exemplo 2:
	Inicialmente: 1SUG47EFG
	Ao final: GSUGFE741
	
	Nota:
	Para testar se determinado caracter de uma string s é uma letra, pode-se 
	utilizar a seguinte expressão:
	
	if ((toupper(s[i]) >= ‘A’) && (toupper(s[i]) <= ‘Z’))

******************************************************************************/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipo das funções

int ordenar (char s[], int i, int cont);

//função main
void main (){
	
	//declaração de variáveis
	char s[9] = "1SUG47EFG";
	
	//exibindo antes de ordenar
	
	printf("Antes de ordenar: %s\n" , s);
	
	//chamando a função
	
	int i = 0, cont = strlen(s)-1;
	
	ordenar (s, i, cont);
	
}

int ordenar (char s[], int i, int cont){
	
	//declaração de variáveis
	
	char aux;
	
	//corpo da função
	
	if (cont!=i){
	
		if (!(toupper(s[i]) >= 'A') && (toupper(s[i]) <= 'Z')){

			aux = s[cont];

			s[cont] = s[i];
		
			s[i] = aux;
			
			cont--;
			
		}
		
		else{
			
			i++;
	
		}
	
		ordenar (s, i, cont);
		
	}
	
	else{
	
		printf("Depois de ordenar: %s\n", s);
	
	}
	
}

	
