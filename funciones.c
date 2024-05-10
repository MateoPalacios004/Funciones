#include <stdio.h>
#include "funciones.h"

float i(float interesMensual)
{
    float i =  interesMensual /= 100.0;
    return i;
}

double interesGanado(float interesMensual, float ahorroTotal)
{
     double interesGanado = ahorroTotal * interesMensual;
    return interesGanado;
}

double ahorroTotal(double montoAhorro, double interesGanado)
{
    double ahorroTotal = ahorroTotal + montoAhorro + interesGanado;
    return ahorroTotal;
}


float datos(float numeroMeses, double montoAhorro, double interesMensual)
{
    float datos = printf("Simulador de Ahorros\n\n");

    printf("Ingrese el número de meses: ");
    scanf("%d", &numeroMeses);

    printf("Ingrese el monto a ahorrar en cada mes: ");
    scanf("%lf", &montoAhorro);

    printf("Ingrese el interés de ahorro que se aplicará en cada mes (en porcentaje): ");
    scanf("%lf", &interesMensual);

    interesMensual /= 100.0;

    return datos;
}
