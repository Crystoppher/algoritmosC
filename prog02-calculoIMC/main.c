/********************************************
 * 
 * NOME:      CRYSTOPPHER SIMÃ•ES TRINDADE
 * DATA:      24/10/2021
 * PROGRAMA:  PROJETO DE CALCULO DE IMC 
 *
 ********************************************/
 
 /* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>


/* --- Declaração de funções --- */


/* ========================================================================= */
/* --- Função Principal --- */
int main()
{	
	
	/*ENTRADAS DE DADOS*/
    float peso = 0.00,
	      altura = 0.00,
	      IMC    = 0.00;
	      
	unsigned short int TRATAMENTO_1 = 0;
	unsigned short int TRATAMENTO_2 = 0;
	unsigned short int i = 0;
	
	for(;;)
	{
		

	putchar('\n');
	printf("Informe seu PESO: ");
	TRATAMENTO_1 = scanf("%f",&peso);
	
	/*TRATAMENTO DE ENTRADA DE DADOS*/
	if(!TRATAMENTO_1)
	{ 
	printf("Error! ");
	exit(1);	
	}else printf("OK");
       
	printf("\nInforme sua ALTURA: ");
	TRATAMENTO_2 = scanf("%f",&altura);
	
	/*TRATAMENTO DE ENTRADA DE DADOS*/
	if(!TRATAMENTO_2)
	{ 
	printf("Error! ");
	exit(1);	
	}else printf("OK");
	
	/*PROCESSAMENTO DE DADOS*/
	IMC = peso / (altura * altura); 
	
	/*SAÍDA DE DADOS*/
	printf("\n\nResultado so IMC: %.2f.",IMC);
	putchar('\n');
	
	printf("==============================================\n");
	printf("IMC\t\t\t  CLASSIFICACAO\t  GRAU\n");
	printf("ENTRE18,5 E 24,9\t   NORMAL\t  0\n");
	printf("ENTRE 25,0 E 29,9\t  SOBREPESO\t  I\n");
	printf("ENTRE 30,0 E 39,9\t  OBESIDADE\t  II\n");
	printf("MAIOR QUE 40,0\t\t     GRAVE\t  III\n");
	printf("==============================================\n");
	
	putchar('\n');
	printf("DESEJA FINALIZAR O PROGRAMA ?\n");
	printf(" 1 - SIM    0 -  NAO\n\n");
	scanf("%d",&i);
	if(i) 	break;	//força a saída imediata do loop
	system("cls");
	
	}/*end laco for*/
	
    return 0;
    
} /* end main */

/* ========================================================================= */
/* --- Desenvolvimento das funções --- */

