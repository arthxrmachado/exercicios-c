/*
   FAC - Turma B
   
   AV1 aplicada em 2019/2
   
   Questão 02 [2,5 pontos]:
   Construir um programa que permita ao usuário calcular a 
   área de diferentes figuras geométricas. Para isto, 
   permanecerá apresentando um menu de opções  
   ([C]írculo, [R]etângulo, [Q]uadrado, [T]riângulo e [S]air) 
   até que o usuário opte por terminar a execução do programa.
   
   Notas:
     1. Fórmulas para o cálculo das áreas:
	    a. Acírculo = ?.raio2, onde ? = 3.14159;
		b. Aretângulo = base.altura;
		c. Aquadrado = lado2; 
		d. Atriângulo = (base.altura)/2.
	 
	 2. Caso o usuário escolha uma opção inválida, 
	    uma mensagem de erro deve ser exibida e uma nova 
		escolha solicitada.
*/

//importação de bibliotecas
#include <stdio.h>

//declaração de constantes
#define PI 3.14159

//main
void main ()
{
	//Declaração de variáveis
	char opcao;
	float raio, base, altura, lado, area;
	
	//repetição que só vai parar quando o usuário optar pela saída
	do
	{
		system ("cls");  //limpa a tela
		//clrscr ();  //clear screen  ---> conio.h
		
		//exibindo as opções
		printf ("Menu de Opcoes:\n\n");
		printf ("[C]irculo\n[R]etangulo\n[Q]uadrado\n[T]riangulo\n[S]air\n");
		
		printf ("\nEntre com a sua opcao: ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao); 
  
		//verificando a opção do usuário
		switch (opcao)
		{
			//círculo
			case 'C': printf ("\n\nEntre com o raio: ");
			          scanf ("%f", &raio);
					  
					  area = PI*raio*raio;
					  
					  printf ("\nArea do circulo = %.1f\n", area);
					  
					  break;  
					  
			//retângulo
			case 'R': printf ("\n\nEntre com a base: ");
			          scanf ("%f", &base);
			          
					  printf ("\n\nEntre com a altura: ");
			          scanf ("%f", &altura);
					  
					  area = base*altura;
					  
					  printf ("\nArea do retangulo = %.1f\n", area);
					  
					  break;  
			
			//quadrado
			case 'Q': printf ("\n\nEntre com o lado: ");
			          scanf ("%f", &lado);
					  
					  area = lado*lado;
					  
					  printf ("\nArea do quadrado = %.1f\n", area);
					  
					  break;  

			//triângulo
			case 'T': printf ("\n\nEntre com a base: ");
			          scanf ("%f", &base);
			          
					  printf ("\n\nEntre com a altura: ");
			          scanf ("%f", &altura);
					  
					  area = (base*altura)/2;
					  
					  printf ("\nArea do triangulo = %.1f\n", area);
					  
					  break;  
					  
			//Saída do sistema
			case 'S': printf ("\n\nFim do programa!\n");
			          break;
			          
			default:  printf ("\n\nOpcao invalida! Tente novamente.\n");
		}
		
		system ("pause");
	}
	while (opcao != 'S');
}
