#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float A, B, resultado;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", A);
        printf("2- Ingresar 2do operando (B=%.2f)\n", B);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                scanf("%f", &A);
                system("cls");
                break;
            case 2:
                scanf("%f", &B);
                system("cls");
                break;
            case 3:
                system("cls");
                resultado = Suma(A, B);
                printf("El resultado de la suma es: %.2f\n\n", resultado);
                break;
            case 4:
                system("cls");
                resultado = Resta(A, B);
                printf("El resultado de la resta es: %.2f\n\n", resultado);
                break;
            case 5:
                system("cls");
                if (B != 0)
                {
                    resultado = Factorial((int)A);
                    printf("El resultado del factorial es: %d\n\n", (int)resultado);
                }
                else
                {
                    printf("Error! No se puede dividir por 0. Cambie el valor de B\n\n");
                }
                break;
            case 6:
                system("cls");
                resultado = Multiplicacion(A, B);
                printf("El resultado de la multiplicacion es: %.2f\n\n", resultado);
                break;
            case 7:
                system("cls");
                if (B > 0)
                {
                    resultado = Factorial((int)A);
                    printf("El resultado del factorial es: %d\n\n", (int)resultado);
                }
                else
                {
                    printf("Error! El numero debe pertenecer a los naturales. Cambie el valor de A\n\n");
                }

                break;
            case 8:
                system("cls");
                resultado = Suma(A, B);
                printf("El resultado de la suma es: %.2f\n", resultado);

                resultado = Resta(A, B);
                printf("El resultado de la resta es: %.2f\n", resultado);

                if (B != 0)
                {
                    resultado = Factorial((int)A);
                    printf("El resultado del factorial es: %d\n\n", (int)resultado);
                }
                else
                {
                    printf("Error! No se puede dividir por 0. Cambie el valor de B\n\n");
                }

                resultado = Multiplicacion(A, B);
                printf("El resultado de la multiplicacion es: %.2f\n\n", resultado);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                system("cls");

                printf("Opcion Invalida! Vuelva a elejir...\n\n");
                break;
        }
    }

    return 0;
}
