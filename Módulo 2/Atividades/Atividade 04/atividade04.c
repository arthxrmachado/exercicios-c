/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 24/05/2021   -   Atividade 4
	
	Quest�o 01:	
	
	Desenvolver uma fun��o recursiva que, dada uma string s, altere-a de forma 
	que as letras fiquem em seu in�cio e os demais caracteres ao final, como 
	nos exemplos a seguir:
	
	Exemplo 1:
	Inicialmente: X*7D2SFH1
	Ao final: XHFDS27*1

	Exemplo 2:
	Inicialmente: 1SUG47EFG
	Ao final: GSUGFE741
	
	Nota:
	Para testar se determinado caracter de uma string s � uma letra, pode-se 
	utilizar a seguinte express�o:
	
	if ((toupper(s[i]) >= �A�) && (toupper(s[i]) <= �Z�))

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipo das fun��es

int ordenar (char s[], int i, int cont);

//fun��o main
void main (){
	
	//declara��o de vari�veis
	char s[9] = "1SUG47EFG";
	
	//exibindo antes de ordenar
	
	printf("Antes de ordenar: %s\n" , s);
	
	//chamando a fun��o
	
	int i = 0, cont = strlen(s)-1;
	
	ordenar (s, i, cont);
	
}

int ordenar (char s[], int i, int cont){
	
	//declara��o de vari�veis
	
	char aux;
	
	//corpo da fun��o
	
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

	
