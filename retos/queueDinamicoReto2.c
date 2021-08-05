#include <stdio.h>

#define SIZE 5

int rear = -1, values[SIZE];

// Al eliminar un valor del queue se recorre todos los valores del array una posición hacia adelante y el rear reduce en 1
void deQueue() {
    if(rear == -1)
        printf("No se puede sacar el valor, porque el queue está vacio");
    else {
        printf("Se va a eliminar el valor de %d del queue", values[0]);
        for(int i = 0; i < SIZE - 1; i++) {
            values[i - 1] = values[i];
        }
        rear--;
    }
}

// Al aumentar un valor en el queue se lo agrega una poscición más adelante del rear y se aumenta el rear en 1
void enQueue() {
    int value;
    if(rear == SIZE - 1)
        printf("No se puede ingresar más valores, porque el queue está lleno");
    else {
        printf("Ingrese el valor que quiere agregar: ");
        scanf("%d", &value);

        values[++rear] = value;
        printf("Se añadió el valor de %d correctamente", value);
    }
}

int main() {
    unsigned char option;

    do {
        printf("\n¿Qué desea hacer?");
        printf("\nAgregar un dato [1]");
        printf("\nQuitar un dato [2]");
        printf("\nSalir[9]");
        printf("\nOpción: ");
        scanf("%hhd", &option);

        switch (option) {
            case 1:
                enQueue();
            break;
            case 2:
                deQueue();
            break;
            case 9:
            break;
            default:
                printf("Ingrese una opción valida");
            break;
        }
    } while (option != 9);

    return 0;
}