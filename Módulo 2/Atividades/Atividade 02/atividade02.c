/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 03/05/2021   -   Atividade 2
	
	Questão 03:
	
	Considere a função cuja assinatura é apresentada a seguir:

	int pesquisa (char s1[], char s2[], int ordem) onde:
	
	- s1 string contendo diversas informações sobre uma pessoa, separadas pelo caracter | (também termina com |)
	
	Ex: nome completo, sexo, idade, cep.
	
	- s2 uma informação a ser buscada em s1
	
	Ex: masculino
	
	- ordem na qual s2 deve ser buscada em s1. 
	
	Por exemplo, se for igual a 3, a função deve verificar se s2 é a terceira informação dentro de s1.   

	Pede-se a implementação desta função, sabendo que ela deve retornar 1 se s2 estiver em s1 
	na posição definida por ordem; caso contrário, deve retornar 0.	

******************************************************************************/

//importação de bibliotecas
#include <stdio.h>
#include <string.h>

//protótipos das funções

int pesquisa (char s1[], char s2[], int ordem);

//função main
void main ()
{
	//declaração de variáveis
	char s1[50], s2[50];
	int ordem;
	
	//inserindo informações na string 1
	
	fflush(stdin);
	printf("Insira as informacoes sobre a pessoa: ");
	gets(s1);
	
	//bsucando informações na string 2
	
	fflush (stdin);
	printf ("\nDigite a informacao a ser buscada: ");
	gets (s2);
	
	//inserindo a ordem
	
	fflush (stdin);
	printf ("\nDigite a ordem: ");
	scanf("%d" , &ordem);
	
	//chamando a função
	
	printf ("\n%d", pesquisa (s1, s2, ordem));
	
}

//implementação das funções

int pesquisa (char s1[], char s2[], int ordem){
	
	//declaração de variáveis
	
	int i, j, cont=0, quant=0;
	
	//conferindo se o usuário irá digitar uma ordem válida
	
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
		
		//utilizando essa função começar a contar do caractere '|' quando a ordem for maior que 1
		
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

//função para contar os caracteres '|'
	

int barramento(char s1[], int ordem){
	
    //declaração de variáveis
    
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
