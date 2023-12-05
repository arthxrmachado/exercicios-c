/*QUESTAO 04: Desenvolva um algoritmo que calcule o consumo de combustivel de um
automovel em determinada viagem. Para isso, devem ser obtidos: 
	i) o percurso (em quilometros) da viagem; 
	ii) o numero de quilometros que o carro percorre com um litro de combustivel (km/l); e 
	iii) o preco do litro do combustivel.

Ao final, o algoritmo deve determinar:
- A quantidade de combustivel, em litros, consumida durante a viagem;
- O custo total de combustivel.
*/

//Importação de bibliotecas
#include <stdio.h>

void main ()
{
	//Declaração de Variáveis
	float km, kmL, precoComb, consumoViagem, custoComb;
	
	//Recebendo dados
	printf("Percurso da viagem em km: ");
	scanf("%f", &km);
	printf("Quantos km por Litro de Combustível o veículo faz: ");
	scanf("%f", &kmL);
	printf("Preço litro de combustível: ");
	scanf("%f", &precoComb);

	//Calculando valores
	consumoViagem = km/kmL;
	custoComb = consumoViagem*precoComb;

	//Exibindo resultados
	printf("\nQuantidade de combustível consumidos na viagem: %.2f L", consumoViagem);
	printf("\nCusto total de combustível da viagem: R$ %.2f \n", custoComb);	
}
