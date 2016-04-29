#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

#include "funciones.h"

#define C 20

    Persona list[C];
    int men18 = 0, mas18 = 0, mas35 = 0;

int buscarEstado(Persona list[]){
    int i, p=-1;
    for(i=0; i<C; i++){
        if(list[i].estado==0){
            p=i;
            break;
        }

    }
    return p;
}

void validar_ent(long int dato){
    while(dato<1000000 || dato > 99999999){
        printf("\nError. Ingrese un DNI entre 1000000 y 99999999\n\n DNI: ");
        scanf("%ld",&dato);
    }
}

void altas(Persona list[]){

    int i, p, auxEdad, dup=0;
    long int auxdni;

    p=buscarEstado(list);

    if(p!=-1){
        printf("Ingrese DNI: ");
        scanf("%ld", &auxdni);
        validar_ent(auxdni);

        for(i=0; i<C; i++){
           if(list[i].estado == 1){
                if(auxdni == list[i].dni){
                    dup = 1;
                    }
           }
            break;
        }
        if(dup==0){
            printf("Ingresar nombre: ");
            fflush(stdin);
            gets(list[p].nombre);
            strlwr(list[p].nombre);
            printf("Ingresar edad: ");
            scanf("%d",&auxEdad);
            if(auxEdad >= 18){
                if(auxEdad >35){
                    mas35++;
                    }
                    else{
                        mas18++;
                        }
                }
                else{
                    men18++;
                    }

            list[p].edad=auxEdad;
            list[p].dni=auxdni;
            list[p].estado=1;

            system("pause");
            system("cls");
        }
        else{
            printf("ERROR. El Dni ya fue ingresado");
            system("pause");
            system("cls");
        }
    }
    else{
		printf("No queda espacio");
		system("pause");
        system("cls");
	}
    system("pause");
    system("cls");
}

void borrar(Persona list[]){
    long int auxdni;
    int i, f=0;
    char rta;

    printf("Ingrese DNI que desea eliminar *sin puntos*: ");
    scanf("%ld",&auxdni);
    for(i=0; i<C; i++){
        if(auxdni==list[i].dni){
            printf("DNI: %ld\nNombre: %s\nEdad: %d\n",list[i].dni, list[i].nombre, list[i].edad);
            printf("Desea elminar estos datos? (Ingrese S o N)");
            rta=tolower(getch());

            if(rta=='s'){
                list[i].estado=0;
                printf("\nSe han eliminado los datos");
                system("pause");
                system("cls");
            }
            else{
                printf("\nLos datos no han sido eliminados");
                system("pause");
                system("cls");
            }
            f=1;
            break;
        }
    }
    if(f==0){
        printf("El DNI ingresado no existe");
        system("pause");
        system("cls");
    }
}


int ordenar(Persona list[]){
    int i,c;
    Persona auxNom;

    for(i=0; i<C-1; i++){
                    for(c=i+1; c<C; c++){
                        if(strcmp(list[i].nombre, list[c].nombre)>0){
                            auxNom=list[i];
                            list[i]=list[c];
                            list[c]=auxNom;
                        }
                    }
                }
            for(i=0; i<C+1; i++){
                if( list[i].estado == 1){
                    strupr(list[i].nombre);
                    printf("\nNombre: %s \tDni: %ld \tEdad: %d\t\n",list[i].nombre, list[i].dni, list[i].edad);
                }
                    //else{
                      //  printf("no ingreso ningun dato");
                        //}
            }
            system("pause");
            system("cls");
}

void grafico(Persona list[]){
    int i, flag=0, mayor;

        if(men18>mas18 && men18> mas35){
            mayor=men18;
        }
        else{
            if(mas18>men18 && mas18> mas35){
                mayor=mas18;
            }
            else{
                mayor=mas35;
            }
        }
        for(i=mayor; i>0; i--){

            if(men18>= i){
                printf(" * ");
            }

            if(mas18>= i){
                    printf("\t  *  ");
                    flag=1;
            }
            if(mas35>=i){
                if(flag == 0)
                    printf("\t\t * ");
             else{
                printf("\t * ");
            }
        }
        printf(" \n");
        }
    printf("-18\t18a35\t+35\n");
    system("pause");
    system("cls");
}
