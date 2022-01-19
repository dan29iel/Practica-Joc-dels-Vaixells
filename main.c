/*
 * main.c
 *
 *  Created on: 18 ene. 2022
 *      Author: daniel
 */
#include <stdio.h>
#define NUM_FILAS 10
#define NUM_COLS 10

int main (){
  int taulell[NUM_FILAS][NUM_COLS];
  int dificultat, i, j, fila, columna, cont;
  char col;
  printf("*************************************\n********* JOC DELS VAIXELLS *********\n*************************************\n \n");
  printf("Selecciona una dificultat:\n");
  printf ("1. FACIL\n2. DIFICIL\n3. MOLT DIFICIL\nAltre número. No m'hi atreveixo (SORTIR)\n");
  scanf ("%d", &dificultat);
  switch (dificultat){
       case 1:
         printf ("Has seleccionat dificultat => Facil\n");
 printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
        for (i = 0; i < NUM_FILAS; i++){
            cont=i+1;
            printf("%d", cont);
               for (j = 0; j < NUM_COLS; j++){
                  printf("[ ]");
               }
               printf("\n");
            }
         do {
             printf("\n Introdueix la fila: ");
             scanf("%d", &fila);
             fila=fila-1;
         } while (fila < 0 || fila > 9);
        do {
            printf("\n Introduce la columna: ");
            scanf(" %c", &col);
            if (col == 65 || col == 98) {
                columna = 0;
            } else if (col == 66 || col == 98) {
                columna = 1;
            } else if (col == 67 || col == 99) {
                columna = 2;
            } else if (col == 68 || col == 100) {
                columna = 3;
            } else if (col == 69 || col == 101) {
                columna = 4;
            } else if (col == 70 || col == 102) {
                columna = 5;
            } else if (col == 71 || col == 103) {
                columna = 6;
            } else if (col == 72 || col == 104) {
                columna = 7;
            } else if (col == 73 || col == 105) {
                columna = 8;
            } else if (col == 74 || col == 106) {
                columna = 9;
            }
        } while (columna < 0 || columna >9);
        if (fila == 1 && columna == 8 || fila == 2 && columna == 2 || fila == 2 && columna == 4 || fila == 2 && columna == 5 || fila == 2 && columna == 8 || fila == 3 && columna == 2 || fila == 3 && columna == 8 || fila == 4 && columna == 2 || fila == 5 && columna == 4 || fila == 5 && columna == 5 || fila == 5 && columna == 6 || fila == 5 && columna == 7 || fila == 8 && columna == 2 || fila == 8 && columna == 3 || fila == 8 && columna == 4 || fila == 8 && columna == 5 || fila == 8 && columna == 6){
            printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                for (i = 0; i < NUM_FILAS; i++){
                    cont=i+1;
                    printf("%d", cont);
                       for (j = 0; j < NUM_COLS; j++){
                           if (i==fila && j==columna){
                               printf("[X]");
                           }
                           else{
                              printf("[ ]");
                           }
                       }
                   printf("\n");
                }
        }
        else {
            printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                for (i = 0; i < NUM_FILAS; i++){
                    cont=i+1;
                    printf("%d", cont);
                       for (j = 0; j < NUM_COLS; j++){
                          printf("[ ]");
                       }
                   printf("\n");
                }
        }
         break;
       case 2:
          printf ("Has seleccionat dificultat => Dificil\n");
          printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
        for (i = 0; i < NUM_FILAS; i++){
            cont=i+1;
            printf("%d", cont);
               for (j = 0; j < NUM_COLS; j++){
                  printf("[ ]");
               }
               printf("\n");
            }
         do {
             printf("\n Introdueix la fila: ");
             scanf("%d", &fila);
             fila=fila-1;
         } while (fila < 0 || fila > 9);
        do {
            printf("\n Introduce la columna: ");
            scanf(" %c", &col);
            if (col == 65 || col == 98) {
                columna = 0;
            } else if (col == 66 || col == 98) {
                columna = 1;
            } else if (col == 67 || col == 99) {
                columna = 2;
            } else if (col == 68 || col == 100) {
                columna = 3;
            } else if (col == 69 || col == 101) {
                columna = 4;
            } else if (col == 70 || col == 102) {
                columna = 5;
            } else if (col == 71 || col == 103) {
                columna = 6;
            } else if (col == 72 || col == 104) {
                columna = 7;
            } else if (col == 73 || col == 105) {
                columna = 8;
            } else if (col == 74 || col == 106) {
                columna = 9;
            }
        } while (columna < 0 || columna >9);
        if (fila == 1 && columna == 8 || fila == 2 && columna == 2 || fila == 2 && columna == 4 || fila == 2 && columna == 5 || fila == 2 && columna == 8 || fila == 3 && columna == 2 || fila == 3 && columna == 8 || fila == 4 && columna == 2 || fila == 5 && columna == 4 || fila == 5 && columna == 5 || fila == 5 && columna == 6 || fila == 5 && columna == 7 || fila == 8 && columna == 2 || fila == 8 && columna == 3 || fila == 8 && columna == 4 || fila == 8 && columna == 5 || fila == 8 && columna == 6){
            printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                for (i = 0; i < NUM_FILAS; i++){
                    cont=i+1;
                    printf("%d", cont);
                       for (j = 0; j < NUM_COLS; j++){
                           if (i==fila && j==columna){
                               printf("[X]");
                           }
                           else{
                              printf("[ ]");
                           }
                       }
                   printf("\n");
                }
        }
        else {
            printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                for (i = 0; i < NUM_FILAS; i++){
                    cont=i+1;
                    printf("%d", cont);
                       for (j = 0; j < NUM_COLS; j++){
                          printf("[ ]");
                       }
                   printf("\n");
                }
        }
          break;
    case 3:
          printf ("Has seleccionat dificultat => Molt dificil\n");
          printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
        for (i = 0; i < NUM_FILAS; i++){
            cont=i+1;
            printf("%d", cont);
               for (j = 0; j < NUM_COLS; j++){
                  printf("[ ]");
               }
               printf("\n");
            }
         do {
             printf("\n Introdueix la fila: ");
             scanf("%d", &fila);
             fila=fila-1;
         } while (fila < 0 || fila > 9);
        do {
            printf("\n Introduce la columna: ");
            scanf(" %c", &col);
            if (col == 65 || col == 98) {
                columna = 0;
            } else if (col == 66 || col == 98) {
                columna = 1;
            } else if (col == 67 || col == 99) {
                columna = 2;
            } else if (col == 68 || col == 100) {
                columna = 3;
            } else if (col == 69 || col == 101) {
                columna = 4;
            } else if (col == 70 || col == 102) {
                columna = 5;
            } else if (col == 71 || col == 103) {
                columna = 6;
            } else if (col == 72 || col == 104) {
                columna = 7;
            } else if (col == 73 || col == 105) {
                columna = 8;
            } else if (col == 74 || col == 106) {
                columna = 9;
            }
        } while (columna < 0 || columna >9);
        if (fila == 1 && columna == 8 || fila == 2 && columna == 2 || fila == 2 && columna == 4 || fila == 2 && columna == 5 || fila == 2 && columna == 8 || fila == 3 && columna == 2 || fila == 3 && columna == 8 || fila == 4 && columna == 2 || fila == 5 && columna == 4 || fila == 5 && columna == 5 || fila == 5 && columna == 6 || fila == 5 && columna == 7 || fila == 8 && columna == 2 || fila == 8 && columna == 3 || fila == 8 && columna == 4 || fila == 8 && columna == 5 || fila == 8 && columna == 6){
            printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                for (i = 0; i < NUM_FILAS; i++){
                    cont=i+1;
                    printf("%d", cont);
                       for (j = 0; j < NUM_COLS; j++){
                           if (i==fila && j==columna){
                               printf("[X]");
                           }
                           else{
                              printf("[ ]");
                           }
                       }
                   printf("\n");
                }
        }
        else {
            printf ("\n  A  B  C  D  E  F  G  H  I  J\n");
                for (i = 0; i < NUM_FILAS; i++){
                    cont=i+1;
                    printf("%d", cont);
                       for (j = 0; j < NUM_COLS; j++){
                          printf("[ ]");
                       }
                   printf("\n");
                }
        }
         break;
    default:
          printf ("Fi del Joc :(\n");
    }
}


