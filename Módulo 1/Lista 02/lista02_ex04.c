/*QUESTAO 04: Desenvolva um algoritmo que calcule o consumo de combustivel de um
automovel em determinada viagem. Para isso, devem ser obtidos: 
	i) o percurso (em quilometros) da viagem; 
	ii) o numero de quilometros que o carro percorre com um litro de combustivel (km/l); e 
	iii) o preco do litro do combustivel.

Ao final, o algoritmo deve determinar:
- A quantidade de combustivel, em litros, consumida durante a viagem;
- O custo total de combustivel.
*/

//Importa��o de bibliotecas
#include <stdio.h>

void main ()
{
	//Declara��o de Vari�veis
	float km, kmL, precoComb, consumoViagem, custoComb;
	
	//Recebendo dados
	printf("Percurso da viagem em km: ");
	scanf("%f", &km);
	printf("Quantos km por Litro de Combust�vel o ve�culo faz: ");
	scanf("%f", &kmL);
	printf("Pre�o litro de combust�vel: ");
	scanf("%f", &precoComb);

	//Calculando valores
	consumoViagem = km/kmL;
	custoComb = consumoViagem*precoComb;

	//Exibindo resultados
	printf("\nQuantidade de combust�vel consumidos na viagem: %.2f L", consumoViagem);
	printf("\nCusto total de combust�vel da viagem: R$ %.2f \n", custoComb);	
}
