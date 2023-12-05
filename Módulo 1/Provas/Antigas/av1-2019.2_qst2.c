/*
   FAC - Turma B
   
   AV1 aplicada em 2019/2
   
   Quest�o 02 [2,5 pontos]:
   Construir um programa que permita ao usu�rio calcular a 
   �rea de diferentes figuras geom�tricas. Para isto, 
   permanecer� apresentando um menu de op��es  
   ([C]�rculo, [R]et�ngulo, [Q]uadrado, [T]ri�ngulo e [S]air) 
   at� que o usu�rio opte por terminar a execu��o do programa.
   
   Notas:
     1. F�rmulas para o c�lculo das �reas:
	    a. Ac�rculo = ?.raio2, onde ? = 3.14159;
		b. Aret�ngulo = base.altura;
		c. Aquadrado = lado2; 
		d. Atri�ngulo = (base.altura)/2.
	 
	 2. Caso o usu�rio escolha uma op��o inv�lida, 
	    uma mensagem de erro deve ser exibida e uma nova 
		escolha solicitada.
*/

//importa��o de bibliotecas
#include <stdio.h>

//declara��o de constantes
#define PI 3.14159

//main
void main ()
{
	//Declara��o de vari�veis
	char opcao;
	float raio, base, altura, lado, area;
	
	//repeti��o que s� vai parar quando o usu�rio optar pela sa�da
	do
	{
		system ("cls");  //limpa a tela
		//clrscr ();  //clear screen  ---> conio.h
		
		//exibindo as op��es
		printf ("Menu de Opcoes:\n\n");
		printf ("[C]irculo\n[R]etangulo\n[Q]uadrado\n[T]riangulo\n[S]air\n");
		
		printf ("\nEntre com a sua opcao: ");
		fflush (stdin);
		scanf ("%c", &opcao);
		opcao = toupper (opcao); 
  
		//verificando a op��o do usu�rio
		switch (opcao)
		{
			//c�rculo
			case 'C': printf ("\n\nEntre com o raio: ");
			          scanf ("%f", &raio);
					  
					  area = PI*raio*raio;
					  
					  printf ("\nArea do circulo = %.1f\n", area);
					  
					  break;  
					  
			//ret�ngulo
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

			//tri�ngulo
			case 'T': printf ("\n\nEntre com a base: ");
			          scanf ("%f", &base);
			          
					  printf ("\n\nEntre com a altura: ");
			          scanf ("%f", &altura);
					  
					  area = (base*altura)/2;
					  
					  printf ("\nArea do triangulo = %.1f\n", area);
					  
					  break;  
					  
			//Sa�da do sistema
			case 'S': printf ("\n\nFim do programa!\n");
			          break;
			          
			default:  printf ("\n\nOpcao invalida! Tente novamente.\n");
		}
		
		system ("pause");
	}
	while (opcao != 'S');
}
