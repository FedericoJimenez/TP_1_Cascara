#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

//Se decaran los prototipos de las funciones
int get_numero();
int get_suma(int, int);
int get_resta(int, int);
int get_multiplicacion(int, int);
int get_division(int, int);
int get_factorial(int);

int get_numero(){ //Funcion para asignar un numero

    int retorno = 0;

    printf("Ingrese un numero: ");
    scanf("%d", &retorno);// Se pide un numero al usuario
    return retorno; //Se devuelve el numero ingresado
}

int get_suma(int num1, int num2){ //Funcion para sumar dos enteros

    int resultado = 0;
    resultado=num1+num2; //Se suman dos variables

    printf("\n La suma: %d + %d es igual a %d\n",num1,num2,resultado);
}

int get_resta(int num1, int num2){//Funcion para restar dos enteros

    int resultado = 0;
    resultado=num1-num2;//Se restan dos variables

    printf("\n La resta: %d - %d es igual a %d\n",num1,num2,resultado);
}

int get_multiplicacion(int num1, int num2){//Funcion para multplicar dos enteros

    int resultado = 0;
    resultado=num1*num2;//Se multiplican dos variables

    printf("\n La multiplicacion: %d * %d es igual a %d\n",num1,num2,resultado);
}

int get_division(int num1, int num2){//Funcion para dividir dos variables

    float resultado = 0;

    //Se utiliza un if para verificar que el divisor sea distinto de 0
    if ( num2 != 0 ){
        resultado=(float)num1/num2;
        printf("\n La division: %d / %d es igual a %.2f\n",num1,num2,resultado);
    }else{
        printf("\n ERROR: No se puede dividir entre cero\n");
        }
}

int get_factorial(int num){

    int resultado;
    //Se utiliza un primer if para verificar si el numero es negativo
    if (num < 0){
        return 0;
    }
    //Se utiliza un segundo if para saber si el numero ingresado es 0, si no lo es, se realiza la operacion
    if (num == 0){
        resultado = 1;
    }else{
        resultado = (num * get_factorial(num-1));
    }
    return resultado;
}
#endif// FUNCIONES_H_INCLUDED
