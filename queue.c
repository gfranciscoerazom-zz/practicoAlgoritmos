/* 1.- Crear pointer para saber que hay en front y rear
2.- Colocar estos valores en -1 al inicializar
3.- Incrementar en 1 el valor de rear cuando agreguemos un elemento
4.- Retornar el valor de front al quitar un elemento e incrementar en 1 el valor de front al usar dequeue
5.- Antes de agregar un elemento revisar si hay espacio
6.- Antes de remover un elemento revisamos que existan elementos
7.- Asegurarnos de que al remover todos los elementos resetear nuestro front y rear a -1 y agregar el valor de 0 a front al hacer nuestro primer enqueue */

#include <stdio.h>

#define SIZE 5

int front = -1, rear = -1, values[SIZE];

void enQueue(int value) {
    if(rear == SIZE - 1)
        printf("\nNuestro Queue está lleno");
    else {
        if (front == -1)
            front = 0;
        values[++rear] = value;
        printf("\nSe inserto el valor %d correctamente", value);
    }
}

void deQueue() {
    if(front == -1)
        printf("\nNo hay ningun valor en el queue");
    else {
        printf("\nSe va a eliminar el valor %d", values[front]);
        front++;
        if(front > rear)
            front = rear = -1;
    }
}

int main() {
    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    deQueue();
    enQueue(10);

    return 0;
}