#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"
#define B 20



int main(){
    Persona per[B];
    char seguir='s';
    int opcion=0, i;

    for(i=0; i<B; i++)
    {
        per[i].estado=0;
    }

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                altas(per);
                break;
            case 2:
                borrar(per);
                break;
            case 3:
                ordenar(per);
                break;
            case 4:
                grafico(per);
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    return 0;
}
