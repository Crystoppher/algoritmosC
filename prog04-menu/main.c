/********************************************
 * 
 * NOME:      CRYSTOPPHER SIMÕES TRINDADE
 * DATA:      25/11/2021
 * PROGRAMA:  MENU- V1.0 
 *
 ********************************************/
 
 /* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

#define LINHA 3  /* n�mero de linhas para apresenta��o do s�mbolo */ 
#define N_REP 30 /* n�mero de vezes que s�mbolo ser� repetido na tela! */


/* --- Declara��o de fun��es --- */
void __menu();

/* ========================================================================= */
/* --- Fun��o Principal --- */
int main(int argc, char *argv[]) {
	
	__menu();
	printf("\nApresentacao do MENU de opcao.\n");
	
	return 0; 
} /* end main */

/* ========================================================================= */
/* --- Desenvolvimento das fun��es --- */
void __menu()
{
		int i,j;
	
	for(i = 0; i < LINHA; i++)
	{
		
		for(j = 0; j < N_REP;j++)
		{
			putchar('#');	/* Insere caracter para representar o s�mbolo na tela */
		}/* End for interno */
		
		putchar('\n'); /* insere nova linha */
		
	}/*End dor externo*/
}
