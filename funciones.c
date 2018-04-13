#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


float get_numero(){ //Funcion para asignar un numero

    float retorno = 0;

    printf("Ingrese un numero: ");
    scanf("%f", &retorno);// Se pide un numero al usuario
    return retorno; //Se devuelve el numero ingresado
}

float get_suma(float num1, float num2){ //Funcion para sumar dos enteros

    float resultado = 0;
    resultado=num1+num2; //Se suman dos variables

    printf("\n La suma: %f + %f es igual a %f\n",num1,num2,resultado);
}

float get_resta(float num1, float num2){//Funcion para restar dos enteros

    float resultado = 0;
    resultado=num1-num2;//Se restan dos variables

    printf("\n La resta: %f - %f es igual a %f\n",num1,num2,resultado);
}

float get_multiplicacion(float num1, float num2){//Funcion para multplicar dos enteros

    float resultado = 0;
    resultado=num1*num2;//Se multiplican dos variables

    printf("\n La multiplicacion: %f * %f es igual a %f\n",num1,num2,resultado);
}

float get_division(float num1, float num2){//Funcion para dividir dos variables

    float resultado = 0;

    //Se utiliza un if para verificar que el divisor sea distinto de 0
    if ( num2 != 0 ){
        resultado = num1/num2;
        printf("\n La division: %f / %f es igual a %f\n",num1,num2,resultado);
    }else{
        printf("\n ERROR: No se puede dividir entre cero\n");
        }
}

int get_factorial(float num){

    int resultado;
    num = (int)num;

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
