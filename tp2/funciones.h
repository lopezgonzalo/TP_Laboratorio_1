#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    long int dni;

}Persona;

int buscarEstado(Persona list[]);
void validar_ent(long int dato);
void altas(Persona list[]);
void borrar(Persona list[]);
int ordenar(Persona list[]);
void grafico(Persona list[]);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(Persona list[]);

/**
 * Obtiene el indice que coincide con el dni pasado por parametro.
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array.
 * @return el indice en donde se encuentra el elemento que coincide con el parametro dni
 */
int buscarPorDni(Persona list[], int dni);

#endif // FUNCIONES_H_INCLUDED
