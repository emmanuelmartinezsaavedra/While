/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: yuris
 *
 * Created on 8 de octubre de 2020, 11:08 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int x=-3,f,menor;
    while(x<=10){
        f=5*(x*x)+(3*x)+8;
        if(menor>f)
            menor=f;
        x++;
    }
    x=menor;
    f=5*(x*x)+(3*x)+8;
    printf("El valor minimo de la funcion f(x) es:%d\n", f);
    printf("Y se alcanza en: x=%d",x);

    return (EXIT_SUCCESS);
}

