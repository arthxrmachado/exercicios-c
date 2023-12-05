/*QUESTAO 01: O IMC (Indice de Massa Corporal) e um criterio da Organizacao Mundial de Saude
para dar uma indicacao sobre a condicao de peso de uma pessoa adulta. A formula e:

							IMC = peso / altura^2

Elabore um algoritmo que, dados o peso e a altura de um adulto, determine a sua condicao
de acordo com a tabela abaixo:

IMC em adultos Condicao
IMC < 18,5 			Abaixo do peso
18,5 <= IMC < 25,0 	Peso ideal
25,0 <= IMC < 30,0 	Sobrepeso
30,0 <= IMC < 35,0 	Obesidade grau I
35,0 <= IMC < 40,0 	Obesidade grau II
IMC >= 40,0 		Obesidade grau III*/

//importacao de bibliotecas
#include <stdio.h>

void main (){

	//declaracao de variaveis
	float peso, altura, imc;
	
	//leitura dos dados de entrada
	printf ("Peso: ");
	scanf ("%f", &peso);
	
	printf ("Altura: ");
	scanf ("%f", &altura);
	
	//calculando o IMC
	imc = peso/(altura*altura);
	
	//exibindo imc
	printf ("IMC = %.1f\n", imc);
	
	//classificando a condicao da pessoa
	if (imc < 18.5){
		printf ("Abaixo do peso");
	}

	else{

		if (/*(imc >= 18.5) &&*/ imc < 25){
			printf ("Peso ideal");
		}

		else{
			
			if (/*(imc >= 25) &&*/ imc < 30){
				printf ("Sobrepeso");
			}

			else{

				if (/*(imc >= 30) && */imc < 35){
					printf ("Obesidade grau I");
				}
				
				else{

					if (/*(imc >= 35) &&*/imc < 40){
						printf ("Obesidade grau II");
					}

					else{
						printf ("Obesidade grau III");
					}
				}
			}
		}
	}
	
}
