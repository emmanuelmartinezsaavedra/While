/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 8 de octubre de 2020, 11:17 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int i,j,cont=0;
    for(i=0; i<3; i++)
        for(j=10; j>8; j--){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }
    printf("\n");
    cont=0;
    for(i=0; i<3; i++)
        for(i=10; i>8; i--){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }
    printf("\n");
    cont=0;
    for(i=0; i<3; i++)
        for(j=i; j<2; j++){
            printf("Interaccion %d\n", cont+1);
            cont=cont+1;
        }

    return (EXIT_SUCCESS);
}

