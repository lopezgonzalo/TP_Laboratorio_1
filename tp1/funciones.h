#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

int num1(x){ //carga primer valor en x
    printf("Ingrese el primer numero: ");//pide que ingrese el valor
    scanf("%d", &x);//guarda el valor ingresado  en la variable x
    system("pause");//pide que precione una letra para continuar
    system("cls");//limpia la pantalla
    return x;//devuelve el valor guardado en x
}

int num2(y){ //carga segundo valor y
    printf("Ingrese el segundo nomero: ");
    scanf("%d", &y);
    system("pause");
    system("cls");
    return y;
}

void suma(x,y){ //suma primer y segundo valor X+Y
    printf("El resultado de la suma es: %d \n", x + y );//informa el valor de la suma
    system("pause");
    system("cls");
}

void resta(x,y){ //resta primer y segundo valor X-Y
    printf("El resultado de la resta es: %d \n", x-y);
    system("pause");
    system("cls");
}

void division(x,y){
    if(y != 0){//valida que el dividendo sea dostinto de cero, resuelve
        printf("El resultado de la division es: %d \n",x/y);
        }
    else{//sino muestrar errorr
            printf("No se puede dividir por 0 \n");
        }
    system("pause");
    system("cls");
}
void multiplicacion(x,y){
    printf("El resultado de la multiplicacion es: %d \n", x * y);
    system("pause");
    system("cls");
}
void factorial(x){
    int i = x;
    double fac = 1;
    if (x<-170){
        printf("el valor del factorial de %d es: -INFINITO- \n",x);
        }
    else if (x>170){
        printf("el valor del factorial de %d es: -INFINITO- \n",x);
        }
    else if (x<0){
        while(i!=0){
            fac = fac * i;
            i++;
            }
        printf("el valor del factorial de %d es: %lg \n", x , fac);
        }
    else if (x>0){
        while(i!=0){
            fac = fac * i;
            i--;
            }
        printf("el valor del factorial de %d es: %lg \n", x, fac);
        }
    system("pause");
    system("cls");
}

void todas(x,y){
    int i = x;
    double fac = 1;
    if (x<-170){


            printf("el valor del factorial de %d es: -INFINITO- \n",x);
            system("pause");
            system("cls");
            }//fin if -170
            else if (x>170){
        printf("el valor del factorial de %d es: -INFINITO- \n",x);
    }else if (x<0){
        while(i!=0){
            fac = fac * i;
            i++;
            }
    }else if (x>0){
        while(i!=0){
            fac = fac * i;
            i--;
            }
        }

    printf("Los resultados de cada operacion son: ");
    printf("SUMA: %d \n", x + y);
    printf("RESTA: %d \n", x - y);
    if(y != 0){
        printf("DIVISION: %d \n", x / y);

    }
    else{
         printf("DIVISION: Imposible dividir por 0 \n");
         }
    printf("MULTIPLICACION: %d \n", x * y);
    printf("FACTORIAL DE %d: %lg\n", x, fac);
    system("pause");
    system("cls");
}
#endif // FUNCIONES_H_INCLUDED
