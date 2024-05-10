#include <stdio.h>
#include "funciones.h"

int main() {
    int numeroMeses;
    double montoAhorro, interesMensual;
    double ahorroTotal = 0.0;
    
    printf("Simulador de Ahorros\n\n");

    printf("Ingrese el número de meses: ");
    scanf("%d", &numeroMeses);

    printf("Ingrese el monto a ahorrar en cada mes: ");
    scanf("%lf", &montoAhorro);

    printf("Ingrese el interés de ahorro que se aplicará en cada mes (en porcentaje): ");
    scanf("%lf", &interesMensual);

    interesMensual /= 100.0;

    printf("\nResumen de Ahorros:\n");
    printf("Mes\tAhorro\tInterés\tTotal\n");
    for (int i = 1; i <= numeroMeses; ++i) {
        double interesGanado = ahorroTotal * interesMensual;
        ahorroTotal += montoAhorro + interesGanado;
        printf("%d\t%.2lf\t%.2lf\t%.2lf\n", i, montoAhorro, interesGanado, ahorroTotal);
    }

    return 0;
}