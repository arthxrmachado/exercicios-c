/******************************************************************************
	FAETERJ-Rio
	
	2FPR - Manh� - 2021/1
	
	Aluno: Arthur Louren�o Machado
	
	Data: 03/05/2021 - Atividade 1
	
	Quest�o 05:

	Desenvolver uma fun��o recursiva que, dado um vetor V com quant n�meros 
	inteiros, determine se seus elementos est�o dispostos de maneira a 
	representar uma progress�o aritm�tica.	

******************************************************************************/

#include <stdio.h>

//declara��o de constantes

#define TAM 10

//prot�tipos das fun��es

int pA (int v[], int posicao);

//fun��o main

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
	
	//fiz uma vari�vel pra deixar a resposta mais bonita, mas n�o sei se isso � uma boa pr�tica.
	
	resultado = pA(v, posicao);
	
	if (resultado == 1){
		
		printf ("\nEh uma PA." , resultado);
		
	}
	
	else{
		
		printf ("\nNao eh uma PA." , resultado);
		
	}
	
}

//implementa��o das fun��es

int pA (int v[], int posicao){
	
	//declara��o de variaveis
	
    int resultado = 0, razao;	
    
    //calculando a raz�o
    
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
