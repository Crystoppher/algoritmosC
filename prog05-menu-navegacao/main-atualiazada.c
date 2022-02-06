
/* ========================================================================= */
/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================= */
/* --- Função Principal --- */
void menu01(),
     menu02(),
     menu03(),
     menu04();
     
 void  __selecaoMenu(),
       __imprimeMenu();    
       
/* ========================================================================= */
/* --- Variaveis Globais --- */
unsigned short padrao_menu  =   0,
			   padrao_subMenu = 0;
			   
char op = 0x00; /*Variável inicializada em 0*/
			   
#define NX_MENU 4/*Número máximo de menus disponível*/ 
/* ========================================================================= */
/* --- Função Principal --- */
main()
{
  
  //__imprimeMenu();
  __selecaoMenu();
  

/*
 * PARA A NAVEGAÇÃO E SELEÇÃO DOS MENUS, SERA UTILIZADO
 * VARIÁVEL GLOBAL 'padrao_menu' 
 */
  switch(padrao_menu)
  {
  	case 1:menu01(); break;
  		case 2:menu02(); break;
  			case 3:menu03(); break;
  				case 4:menu04(); break;
  }/* end switch */
  
                      
  return 0;                                  
  
} /* end main */

/* ========================================================================= */
/* --- Desenvolvimento das funções --- */

//void __imprimeMenu()
//{
//
//}/* end  __imprimeMenu() */

void  __selecaoMenu()
{    
    
	printf("\n\n === MENU DE OPCOES === \n");
	printf("Digite r   - DIREITA:       \n");
	printf("Digite l   - ESQUERDA:      \n");
	printf("Digite e   - ENTER:         \n");
	printf("Digite g   - RETORNAR:      \n");	
	putchar('>');
	scanf(" %c",&op);/*coleta a opção do usuário*/
	
	/* Lógica para avançar nas telas do MENU */
	if(op == 'r' && padrao_subMenu == 1)
	{
		if(padrao_menu <= NX_MENU ){
		padrao_menu += 1;	
		} 
	}
	
	/* Lógica para retornar nas telas do MENU */
	if(op == 'l' && padrao_subMenu == 1)
	{
		if(padrao_menu > 0)
		padrao_menu -= 1; 
	}
	
	if(op == 'e')
	{
		if(padrao_subMenu <= 2 )
		padrao_subMenu += 1;
	}	
	
	if(op == 'g')
	{
		if(padrao_subMenu > 0 )
		padrao_subMenu -=1;
	}	
}/* end  __selecaoMenu() */

/*
 * PARA A NAVEGAÇÃO INTERNA DOS SUB-MENUS A SELEÇÃO SERA REALIZADA POR 
 * INTERMEDIO DA VARIÁVEL GLOBAL 'padrao_subMenu' 
 */
void menu01()
{
	switch(padrao_subMenu)
	{
		case 1:  printf("\nMenu ATIVADO!\n");
		break;
		case 2:  printf("\nMenu DESATIVADO!\n");
		break;
		default: printf("\nINVALIDO!\n");
	}/* end switch */
}/* end menu1 */

void menu02()
{
	switch(padrao_subMenu)
	{
		case 1:  printf("\nMenu ATIVADO!\n");
		break;
		case 2:  printf("\nMenu DESATIVADO!\n");
		break;
		default: printf("\nINVALIDO!\n");
	}/* end switch */
}/* end menu2 */

void menu03()
{
	switch(padrao_subMenu)
	{
		case 1:  printf("\nMenu ATIVADO!\n");
		break;
		case 2:  printf("\nMenu DESATIVADO!\n");
		break;
		default: printf("\nINVALIDO!\n");
	}/* end switch */
}/* end menu3 */

void menu04()
{
	switch(padrao_subMenu)
	{
		case 1:  printf("\nMenu ATIVADO!\n");
		break;
		case 2:  printf("\nMenu DESATIVADO!\n");
		break;
		default: printf("\nINVALIDO!\n");
	}/* end switch */
}/* end menu4 */


