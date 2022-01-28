#include <stdio.h>
#include <stdlib.h>

void function1();
void function2();
void function3();

int main(int argc, char *argv[]) {
	
	unsigned short TELA_MENU = 0,     		/* flag para marcar as posição do MENU        */
				   TELA_ATUAL = 0,		/* flag para marcar as posição da TELA ATUAL  */
				   POSITION_DIREITA = 0,	/* simula botão de navegação para DIREITA     */
				   POSITION_ESQUERDA = 0,   /* simula botão de navegação para ESQUERDA    */
				   POSITION_RETURN = 0,		/* simula botão de navegação para RETORNAR    */
				   POSITION_ENTER = 0; 		/* simula botão de navegação para ENTER       */
	
	
		if(TELA_ATUAL == TELA_MENU)
				function1(); /* chamada para função */	
		 	else 
		if( TELA_ATUAL == 1 )
				function1(); /* chamada para função */		
			else 
		if(  TELA_ATUAL == 2 )
				function3(); /* chamada para função */	
		

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


