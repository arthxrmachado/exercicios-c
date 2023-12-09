/* 
Desenvolver um programa que leia um número inteiro positivo e o converta para as bases numéricas 2 (binária), 8 (octal) e 16 (hexadecimal), respeitando às 
seguintes regras:

a. Uma única função que, dado um número inteiro, converta-o para a base b, exibindo o resultado desta transformação;
b. Uma função que valide o número fornecido pelo usuário, devendo este ser, obrigatoriamente, não negativo. Deve retornar o valor 0 caso o valor seja 
inválido; ou 1, caso contrário;
c. Uma função que valide a base, que pode ser 2, 8 ou 16. Deve retornar o valor 0 caso a base seja inválida; ou 1, caso contrário.
d. A função main deve permanecer lendo valores do usuário até que o número fornecido seja não negativo;
*/

#include <stdio.h>

//protótipos das funções

int exibirNumero (int numero, int base, int valorBinario, int valorOctal);
int validarNumero (int numero);
int validarBase (int base);

//main

int main(){
	
	do{

	//variáveis
	
	int numero, base, valorBinario, valorOctal;
			
	printf("Digite um numero para ser convertido: ");
	scanf("%d" , &numero);		
	
	printf("Digite a base para ser convertida (2, 8 ou 16): ");
	scanf("%d" , &base);

	validarNumero (numero);
	validarBase (base);	
	exibirNumero (numero, base, valorBinario, valorOctal);
	
		
	}while(validarNumero>=0);
	
}
	
//implementação das funções

int validarNumero (int numero){

	if(numero<0){
	
		return 0;
	
	}else{
	
		return 1;
	}

}

int validarBase (int base){
	
	if (base==2){
		
		return 1;
		
	} else if (base==8){
		
		return 1;
		
	} else if (base==16){
		
		return 1;
		
	} else {
		
		return 0;
	}

}

int converterBinario(int valor){
	
    int valorBinario = 0;
    int resto, sequencial = 1;
 
    while (valor!= 0){
    	
        resto = valor % 2;

        valor /= 2;
        
        valorBinario += resto * sequencial;
         
        sequencial *= 10;
    }
     
    return valorBinario;
}

int converterOctal(int valor){
	
    int valorOctal = 0, sequencia = 1;
     
    while (valor != 0){
    	
        valorOctal += (valor % 8) * sequencia;
         
        valor /= 8;
        
        sequencia *= 10;
    }
 
    return valorOctal;
}

int exibirNumero (int numero, int base, int valorBinario, int valorOctal){
	
	if (base==2){
		
		valorBinario=converterBinario(numero);
		printf("%d em binario: %d\n\n", numero, valorBinario);
		
	} else if (base==8){
		
		valorOctal=converterOctal(numero);
		printf("%d em octal: %d\n\n", numero, valorOctal);
	}
	
}
