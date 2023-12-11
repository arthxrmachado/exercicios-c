/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manhã - 2021/1
	
	Aluno: Arthur Lourenço Machado
	
	Data: 03/05/2021 - Atividade 1
	
	Questão 05:

	Desenvolver uma função recursiva que, dado um vetor V com quant números 
	inteiros, determine se seus elementos estão dispostos de maneira a 
	representar uma progressão aritmética.	

******************************************************************************/

#include <stdio.h>

//declaração de constantes

#define TAM 10

//protótipos das funções

int pA (int v[], int posicao);

//função main

void main (){
	
	int i, v[TAM], posicao, resultado;
	
	for(i=0; i<TAM; i++){
		
		printf("Digite um valor: ");
		scanf("%d", &v[i]);
		
	}
	
	posicao = TAM-1;
	
	//para retornar apenas 1 para verdadeiro e 0 para falso
	
	/*pA(v, posicao);
	
	printf ("\n%d" , pA(v, posicao));*/
	
	//fiz uma variável pra deixar a resposta mais bonita, mas não sei se isso é uma boa prática.
	
	resultado = pA(v, posicao);
	
	if (resultado == 1){
		
		printf ("\nEh uma PA." , resultado);
		
	}
	
	else{
		
		printf ("\nNao eh uma PA." , resultado);
		
	}
	
}

//implementação das funções

int pA (int v[], int posicao){
	
	//declaração de variaveis
	
    int resultado = 0, razao;	
    
    //calculando a razão
    
    razao = v[1]-v[0];
	
	//aplicando a recursividade
	
    if(posicao != 0){
    	
      resultado += pA(v, posicao-1);
      
    }
  
    if (v[posicao+1] - v[posicao] == razao){
    

      return ++resultado;
      
    }
    
	if(resultado == (TAM-1)){
	
		return 1;
		
	}
	
	else{
		
		return 0;
		
	}
	
}
