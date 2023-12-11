/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 14/06/2021   -   Atividade 7
	
	Questão 1: 

	Desenvolver uma função que, dado um arquivo texto, verifique o número de 
	palavras existentes no mesmo.


	Observação: serão considerados delimitadores de palavras: o espaço, 
	o enter e os símbolos de ,  .  ?  !  ;   :
	
******************************************************************************/

//importação de bibliotecas
#include <stdio.h>

//protótipo das funções

int verificarPalavras (char nomeArq[]);

void main (){
	
	//declaração de variáveis
	char nomeArq[10];
	
	//lendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	gets (nomeArq);
	
	//chamando a função e testando se o arquivo foi ou não aberto
	if (verificarPalavras (nomeArq) == 0){
		
		printf ("\nErro na abertura do arquivo! Tente novamente.");
	}
	
	else{
	
		printf ("\nExistem %d palavras neste arquivo." , verificarPalavras(nomeArq));
		
	}
	
}

//implementação das funções
int verificarPalavras (char nomeArq[]){
	
	//declaração de variáveis
	FILE *arq;
	char caracter;
	int cont = 0;
	
	//abertura do arquivo para leitura
	arq = fopen (nomeArq, "r");
	
	//testando se o arquivo foi ou não aberto
	if (arq == NULL){
		
		return 0;
		
	}
	
	else{
		
		//lendo cada caracter no arquivo e caso seja encontrado um delimitador, o "cont" cresce, pq significa que foi encontrado uma palavra
		while (fscanf (arq, "%c", &caracter) != EOF){
			
			if(caracter == ' ' || caracter == '\n' || caracter == ',' || caracter == '.' || caracter == '?' || caracter == '!'
			|| caracter == ';' || caracter == ':'){
				
				cont++;
				
			}
			
		}
			
			//verificando se o último caracter é um delimitador, caso não seja o "cont" cresce, pois significa que existe uma última palavra
			//por mais que esteja não tenha sido delimitada ao seu final
			//desculpa, não consegui pensar num jeito melhor do que esse
		
			if (caracter != '\n' || caracter != ',' || caracter != '.' || caracter != '?' || caracter != '!'
			|| caracter != ';' || caracter != ':'){
				
				cont++;
				
			}
				
		//fechar o arquivo
		fclose (arq);
		
		return cont;
		
	}
	
}


