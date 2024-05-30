#include <stdio.h>
#include "funcione.h"

int main (int argc, char *argv[]) {

    char nombresDireccion[6][2][30];
    int numeros[6];
    ingresarContactos(nombresDireccion,numeros,6);
    imprimirContactos(nombresDireccion,numeros,6);
    printf("Ingresar el nombre de la persona que busca");
    fflush(stdin);
    scanf("%s",&NombreABuscar);
    return 0;
}