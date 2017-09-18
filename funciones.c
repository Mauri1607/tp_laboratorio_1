#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float Suma(float varUno, float varDos)
{
    return (varUno + varDos);
}

float Resta(float varUno, float varDos)
{
    return (varUno - varDos);
}

float Division(float varUno, float varDos)
{
    return (varUno / varDos);
}

float Multiplicacion(float varUno, float varDos)
{
    return (varUno * varDos);
}

int Factorial(float varUno)
{
    if(varUno == 1)
    {
        return varUno;
    }

    return (varUno * Factorial(varUno - 1));
}
