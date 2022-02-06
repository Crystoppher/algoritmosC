/********************************************
 * 
 * NOME:      CRYSTOPPHER SIMÃ•ES TRINDADE
 * DATA:      23/10/2021
 * PROGRAMA:  REGISTRO DE ALUNOS - V1.0 
 *
 ********************************************/

/* --- Bibliotecas --- */
#include <stdio.h>
#include <stdlib.h>

/* --- Declaração de funções --- */
void printMenu();


/* ========================================================================= */
/* --- Função Principal --- */
 int main()
 {
 	printMenu();
 	
 	return 0;
 } /* end main */


/* ========================================================================= */
/* --- Desenvolvimento das funções --- */
void printMenu(){
	
  putchar('\n');
  printf(" *********************************************\n");
  printf(" *                                           *\n");
  printf(" *   $$$  $$$   $$$$$   $$    $   $     $    *\n");
  printf(" *   $  $$  $   $       $ $   $   $     $    *\n");
  printf(" *   $      $   $$$$    $  $  $   $     $    *\n");
  printf(" *   $      $   $       $   $ $   $     $    *\n");
  printf(" *   $      $   $$$$$   $    $$    $$$$$     *\n");
  printf(" *                                           *\n");
  printf(" *********************************************\n");
  putchar('\n');
  printf("\tPrecione qualquer tecla!");
  getchar();
  system("cls");
  
   }


