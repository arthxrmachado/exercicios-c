/*
QUESTÃO 02: Dados dois números inteiros A e B, fazer uma função que determine o número de potências de 2 existentes no intervalo definido pelos dois valores,
assim como a maior delas.

*/

#include <stdio.h>

//protótipo das funções

void exibirPotencia (int a, int b);

//main

void main(){
	
	//variáveis
	
	int valor1, valor2;
	
	//dados
	
	printf("Digite o primeiro valor: ");
	scanf ("%d" , &valor1);
	
	printf("Digite o segundo valor: ");
	scanf ("%d" , &valor2);
	
	exibirPotencia(valor1, valor2);
	
}

//implementação das funções

void exibirPotencia (int a, int b){
	
	//variáveis
	
	int i, maior=0;
	   
     for(i=2; i<=b; i*=2){
        
            printf("\n%d", i);
            
        if(i>maior){
        	
        	maior=i;
        	
		} 
	}
	
	printf("\n\nO maior: %d", maior);
}
