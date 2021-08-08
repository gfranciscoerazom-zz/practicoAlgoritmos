#include <stdio.h>

long factorial(int n) {
    if(n == 0)
        return 1;
    else
        return (n * factorial(n - 1));
}

void main() {
    int number;
    do {
        printf("Ingrese el número a calcular: ");
        scanf("%d", &number);

        if (number < 0)
            printf("El número debe ser positivo\n");
    } while(number < 0);

    long result = factorial(number);
    printf("El resultado de %d! es: %ld", number, result);
}