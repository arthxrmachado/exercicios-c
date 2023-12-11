/******************************************************************************

	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 14/06/2021   -   Atividade 7
	
	Quest�o 1: 

	Desenvolver uma fun��o que, dado um arquivo texto, verifique o n�mero de 
	palavras existentes no mesmo.


	Observa��o: ser�o considerados delimitadores de palavras: o espa�o, 
	o enter e os s�mbolos de ,  .  ?  !  ;   :
	
******************************************************************************/

//importa��o de bibliotecas
#include <stdio.h>

//prot�tipo das fun��es

int verificarPalavras (char nomeArq[]);

void main (){
	
	//declara��o de vari�veis
	char nomeArq[10];
	
	//lendo o nome do arquivo
	printf ("Entre com o nome do arquivo: ");
	gets (nomeArq);
	
	//chamando a fun��o e testando se o arquivo foi ou n�o aberto
	if (verificarPalavras (nomeArq) == 0){
		
		printf ("\nErro na abertura do arquivo! Tente novamente.");
	}
	
	else{
	
		printf ("\nExistem %d palavras neste arquivo." , verificarPalavras(nomeArq));
		
	}
	
}

//implementa��o das fun��es
int verificarPalavras (char nomeArq[]){
	
	//declara��o de vari�veis
	FILE *arq;
	char caracter;
	int cont = 0;
	
	//abertura do arquivo para leitura
	arq = fopen (nomeArq, "r");
	
	//testando se o arquivo foi ou n�o aberto
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
			
			//verificando se o �ltimo caracter � um delimitador, caso n�o seja o "cont" cresce, pois significa que existe uma �ltima palavra
			//por mais que esteja n�o tenha sido delimitada ao seu final
			//desculpa, n�o consegui pensar num jeito melhor do que esse
		
			if (caracter != '\n' || caracter != ',' || caracter != '.' || caracter != '?' || caracter != '!'
			|| caracter != ';' || caracter != ':'){
				
				cont++;
				
			}
				
		//fechar o arquivo
		fclose (arq);
		
		return cont;
		
	}
	
}


