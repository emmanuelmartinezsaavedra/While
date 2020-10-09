/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 8 de octubre de 2020, 11:06 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int a=2,suma;
    while(a<50){
        a=a+3;
        if(a%5==0)
            suma=suma+a;
        printf("%d\n",a);
    }
    printf("Total de la suma es:%d",suma);

    return (EXIT_SUCCESS);
}

