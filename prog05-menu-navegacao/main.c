#include <stdio.h>
#include <stdlib.h>

void function1();
void function2();
void function3();

int main(int argc, char *argv[]) {
	
	unsigned short TELA_MENU = 0,     		/* flag para marcar as posi��o do MENU        */
				   TELA_ATUAL = 0,		/* flag para marcar as posi��o da TELA ATUAL  */
				   POSITION_DIREITA = 0,	/* simula bot�o de navega��o para DIREITA     */
				   POSITION_ESQUERDA = 0,   /* simula bot�o de navega��o para ESQUERDA    */
				   POSITION_RETURN = 0,		/* simula bot�o de navega��o para RETORNAR    */
				   POSITION_ENTER = 0; 		/* simula bot�o de navega��o para ENTER       */
	
	
		if(TELA_ATUAL == TELA_MENU)
				function1(); /* chamada para fun��o */	
		 	else 
		if( TELA_ATUAL == 1 )
				function1(); /* chamada para fun��o */		
			else 
		if(  TELA_ATUAL == 2 )
				function3(); /* chamada para fun��o */	
		

	return 0;
}

void function1()
{
	
} /* end void function1() */

void function2()
{
	
} /* end void function2() */

void function3()
{
	
} /* end void function3() */


