/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 8 de octubre de 2020, 10:54 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int num1,i,num2;
    printf("Ingrese los numeros\n");
    while(i<10){
        i++;
        scanf("%d",&num1);
        num2=num2+num1;
    }
    printf("La suma de los 10 numeros es: %d", num2);

    return (EXIT_SUCCESS);
}

