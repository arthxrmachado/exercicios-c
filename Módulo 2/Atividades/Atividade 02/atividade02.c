/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 03/05/2021   -   Atividade 2
	
	Quest�o 03:
	
	Considere a fun��o cuja assinatura � apresentada a seguir:

	int pesquisa (char s1[], char s2[], int ordem) onde:
	
	- s1 string contendo diversas informa��es sobre uma pessoa, separadas pelo caracter | (tamb�m termina com |)
	
	Ex: nome completo, sexo, idade, cep.
	
	- s2 uma informa��o a ser buscada em s1
	
	Ex: masculino
	
	- ordem na qual s2 deve ser buscada em s1. 
	
	Por exemplo, se for igual a 3, a fun��o deve verificar se s2 � a terceira informa��o dentro de s1.   

	Pede-se a implementa��o desta fun��o, sabendo que ela deve retornar 1 se s2 estiver em s1 
	na posi��o definida por ordem; caso contr�rio, deve retornar 0.	

******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>
#include <string.h>

//prot�tipos das fun��es

int pesquisa (char s1[], char s2[], int ordem);

//fun��o main
void main ()
{
	//declara��o de vari�veis
	char s1[50], s2[50];
	int ordem;
	
	//inserindo informa��es na string 1
	
	fflush(stdin);
	printf("Insira as informacoes sobre a pessoa: ");
	gets(s1);
	
	//bsucando informa��es na string 2
	
	fflush (stdin);
	printf ("\nDigite a informacao a ser buscada: ");
	gets (s2);
	
	//inserindo a ordem
	
	fflush (stdin);
	printf ("\nDigite a ordem: ");
	scanf("%d" , &ordem);
	
	//chamando a fun��o
	
	printf ("\n%d", pesquisa (s1, s2, ordem));
	
}

//implementa��o das fun��es

int pesquisa (char s1[], char s2[], int ordem){
	
	//declara��o de vari�veis
	
	int i, j, cont=0, quant=0;
	
	//conferindo se o usu�rio ir� digitar uma ordem v�lida
	
	if (ordem != 1 && ordem != 2 && ordem != 3 && ordem != 4){
		
		printf ("\nErro! Insira uma ordem de 1 ate 4. ");
		
		return 0;
	}
	
	if (ordem == 1){
		
		for (i=0, j=0; s1[i] != '|', s2[i] != '\0'; i++, j++){

			if (s1[i] == s2[i]){
					
				cont++;
					
			} else {
				
				return 0;
				
			}
				
		}
		
			if (cont == strlen(s2)){
				
				return 1;
				
			}
			
			else{
				
				return 0;
				
			}
		
	}
	
	else{
		
		//utilizando essa fun��o come�ar a contar do caractere '|' quando a ordem for maior que 1
		
		quant = barramento (s1, ordem);
		
		for (i=quant, j=0; s1[i] != '|', s2[j] != '\0'; i++, j++){

				if (s1[i] == s2[j]){
					
					cont++;
					
				}
				
				else{
					
				return 0;
				
			}
				
		}
			
			if (cont == strlen(s2)){
				
				return 1;
				
			}
			
			else{
				
				return 0;
				
			}
	
	}
	
}

//fun��o para contar os caracteres '|'
	

int barramento(char s1[], int ordem){
	
    //declara��o de vari�veis
    
    int i, quant=0, barra=0;

        for (i=0; quant<ordem-1; i++){
        	
        	if(s1[i] == '|'){
        		
        		quant++;
        		
        		barra++;
        		
			}
			
            else{
            	
                barra++;
            }
            
        }
        
    return barra;
}
