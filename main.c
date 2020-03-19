#include <stdio.h>
#include <string.h>

// Pedro Antonio Estévez Pérez

// Ejercicio 9

/* Realizar una función que reciba por parámetro dos cadenas de caracteres
 * y debe concatenar la segunda a la primera. El programa principal imprimirá
 * el resultado de la concatenación.*/

/* Para pasar cadenas de caracteres a una función es imprescindible usar
 * punteros. Una vez pasada la dificultad de donde ponerlos, el problema
 * es trivial. Introducimos las cadenas, llamamos a lafunción, la concatenamos
 * y la devolvemos.*/

// La función es un puntero puesto que devuelvo un puntero.

char *concatenar(char *cadena1, char *cadena2) // Lo recibo como valor
{
    strcat(cadena1, cadena2); // La nueva cadena sobreescribe a la cadena uno
    return cadena1; // Envío el puntero de vuelta
}

int main(void)
{
    char *cadena1, *cadena2, *salida;
    cadena1 = (char*) malloc(sizeof(char)*100); //Reservo la memoria
    cadena2 = (char*) malloc(sizeof(char)*100);

    printf("Introduce la primera cadena: ");
    gets(cadena1);
    printf("Introduce la segunda cadena: ");
    gets(cadena2);
    //int longitud = strlen(cadena1);
    //*(cadena1+longitud) = ' ';

    salida = concatenar(cadena1, cadena2); // Envío el puntero y recibo como valor
    printf("La union es: %s\n\n", salida);
}
