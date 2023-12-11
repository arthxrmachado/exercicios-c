/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 03/05/2021 - Atividade 1
	
	Questão 01:

	Desenvolver uma função recursiva que determine o número de caracteres comuns 
	entre duas strings s1 e s2.		

******************************************************************************/

//importação de bibliotecas

#include <stdio.h>
#include <string.h>
#include <ctype.h>

//protótipos das funções

int caracteresComuns (char s1[] , char s2[], int cont, int cont2);
int excluirCaracteresIguais (char s[]);

//função main

void main ()
{
	//declaração de variáveis
	
	char s1[50];
	char s2[50];
	
	//leitura da string
	
	fflush (stdin);
	printf ("Entre com uma palavra: ");
	gets (s1);
	
	fflush (stdin);
	printf ("Entre com outra palavra: ");
	gets (s2);
	
	//acho que é melhor chamar de excluir caracteres iguais aqui do que na função recursiva
	
	excluirCaracteresIguais (s1);
	
	excluirCaracteresIguais (s2);
	
	int cont = strlen(s1)-1, cont2 = strlen(s2)-1;
	
	//chamando a função e exibindo a quantidade de caracteres da string
	
	printf ("\nAs duas palavras digitadas possuem %d caracteres em comum.", caracteresComuns (s1, s2, cont, cont2));
}

//implementação das funções

int excluirCaracteresIguais (char s[]){
	
	//declaração de variáveis
	
	int i, j, k;

	//varrendo a string
	
	for (i=0; s[i]!='\0'; i++){
		
		for (j=i+1; s[j]!='\0'; j++){
			
			if (s[i] == s[j]){
				
				for (k=i; k<strlen(s); k++){
					
					s[k] = s[k+1];
					
				}
				
				i--;
			}
		}
	}
}

int caracteresComuns (char s1[] , char s2[], int cont, int cont2){
	
	//declaração de variaveis
	
    int resultado = 0;
 
 	//aplicando recursividade
 	
    if(cont != 0){
    	
      resultado += caracteresComuns(s1, s2, cont-1, cont2);
      
    }
    
	else if(cont2 != 0){
		
      resultado += caracteresComuns(s1, s2, strlen(s1)-1, cont2-1);
      
    }
  
    if (s1[cont] == s2[cont2]){
    	
    return resultado+1;
      
    }
  
    return resultado;
    
}
