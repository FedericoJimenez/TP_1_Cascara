#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    //Declaracion de variables
    char seguir = 's';
    int numero1= 0;
    int numero2 = 0;
    int suma = 0;
    int resta = 0;
    int multiplicacion = 0;
    int division = 0;
    int factorial = 0;
    int opcion = 0;

    while(seguir == 's')
    {
        printf("1- Ingresar 1er operando (A= %d)\n", numero1);
        printf("2- Ingresar 2do operando (B=%d)\n", numero2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial del primer operando (A!)\n");
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                numero1 = get_numero();
                break;
            case 2:
                numero2 = get_numero();
                break;
            case 3:
                suma = get_suma(numero1, numero2);
                break;
            case 4:
                resta = get_resta(numero1, numero2);
                break;
            case 5:
                division = get_division(numero1, numero2);
                break;
            case 6:
                multiplicacion = get_multiplicacion(numero1, numero2);
                break;
            case 7:
                factorial = get_factorial(numero1);
                if (factorial == 0){
                    printf("\n ERROR: no se puede realizar el factorial de un numero negativo\n");
                }else{
                    printf("\n El factorial de %d es igual a %d\n", numero1, factorial);
                }
                break;
            case 8:
                suma = get_suma(numero1, numero2);
                resta = get_resta(numero1, numero2);
                division = get_division(numero1, numero2);
                multiplicacion = get_multiplicacion(numero1, numero2);
                factorial = get_factorial(numero1);
                if (factorial == 0){
                    printf("\n ERROR: no se puede realizar el factorial de un numero negativo\n");
                }else{
                    printf("\n El factorial de %d es igual a %d\n", numero1, factorial);
                }
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }
    return 0;

}
