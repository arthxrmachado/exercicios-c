/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 24/05/2021 - Atividade 3
	
	Questão 01:

	Dada uma matriz de inteiros bidimensional M10x20, desenvolver uma função que 
	troque os elementos da linha L1 pelos elementos (em ordem inversa) da linha L2, 
	como ilustrado no exemplo abaixo:
	
	M = 	4 5 1 3
		9 7 8 1
		0 2 9 4
		4 7 2 8	
		
	Trocar os elementos da segunda linha - L1 - com os elementos da quarta linha 
	- L2 - (sendo estes últimos invertidos):
	
	M = 	4 5 1 3
		8 2 7 4
		0 2 9 4
		9 7 8 1
		
	Nota:
	A função deve retornar um inteiro, de acordo com os valores de L1 e L2. 
	Se estes forem válidos, retornar 1; caso contrário, retornar 0.
	
******************************************************************************/

//importação de bibliotecas

#include <stdio.h>

//declaração de constantes

#define L 4
#define C 4

//protótipos das funções

int trocarElementos (int matriz[L][C], int L1, int L2);
int exibirMatriz(int matriz[L][C]);
int preencherMatriz(int matriz[L][C]);

//função main

void main (){
	
	int m[L][C];
	
	int i, j, L1, L2, resultado = 0;
	
	printf("Escolha uma linha: ");
	scanf ("%d" , &L1);
	
	printf("\nEscolha outra linha: ");
	scanf ("%d" , &L2);
	
	//as linhas estão de indo de 1 à 10
	
	if ((L1 >= 1 && L1 < L2) && (L2 <= L)){
	
		//preenchendo a matriz aleatoriamente e, em seguida, exibindo-a
		preencherMatriz(m);
		exibirMatriz(m);
	
		//trocando elementos
		resultado = trocarElementos(m, L1, L2);
		
		printf("\n\n");
		
		//exibindo a matriz
		
		exibirMatriz(m);
		
		printf ("\nRetorno: %d" , resultado);
	
	}
	
	else{
		
		printf("\nLinhas invalidas! Tente novamente.");
		
	}
	
}

//implementação das funções

//trocando elementos da linha L1 pela linha L2 (inversamente)
int trocarElementos (int m[L][C], int L1, int L2){
	
	float string[C];
	int i, j;	
    
	//armazenando a primeira linha em uma string e em seguida passando L1 para L2
	for(i=0; i<C; i++){
		
    	string[i] = m[L2-1][i];
    	
        m[L2-1][i] = m[L1-1][i];
        
        if (!string[i]>='0' && string[i]<='9'){
        	
			return 0;
				
        }
        	
	}
			
	
	//passando as informações da string e enviando para L1 inversamente
    for(i=0, j=(C-1); i<C; i++, j--){
    	
    	m[L1-1][i] = string[j];
    	
    	if (!string[j]>='0' && string[j]<='9'){
        	
			return 0;
				
        }
    	
	}
	
	return 1;
	
}

//exibindo a matriz
int exibirMatriz(int matriz[L][C]){
	
	int i, j;
	
	for(i=0; i<L; i++){
		
		for(j=0; j<C; j++){
			
			printf("%d ", matriz[i][j]);
			
		}
		
		printf("\n");
	}
	
}

//preenchendo a matriz aleatoriamente
int preencherMatriz(int matriz[L][C]){
	
	int i, j;
	
	srand (time(NULL));
	
	for(i=0; i<L; i++){
		
	
		for(j=0; j<C; j++){
			
			matriz[i][j]=rand() % 100;
			
		}
		
	}
	
}
