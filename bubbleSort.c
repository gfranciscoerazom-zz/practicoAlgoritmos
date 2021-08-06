/* 1.- Comenzamos a hacer la compraración de elementos adyacentes
2.- Repetimos hasta tener una pasada completa sin ningún swap */

#include <stdio.h>

void swap(int *n1, int *n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void bubbleSort(int vectorEntrada[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(vectorEntrada[j] > vectorEntrada[j + 1])
                swap(&vectorEntrada[j], &vectorEntrada[j + 1]);
        }
    }
}

int printArray(int vectorEntrada[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d  ,", vectorEntrada[i]);
    printf("\nFin del ordenamiento");
}

int main() {
    int vectorEntrada[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(vectorEntrada)/sizeof(vectorEntrada[0]);
    bubbleSort(vectorEntrada, n);
    printArray(vectorEntrada, n);
    printf("\n");
    return 0;
}