#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct client {
    unsigned char name[50];
    unsigned char id[10];
    float credit;
    unsigned char address[100];
};

int main() {
    struct client client1 = {0};
    strcpy(client1.name, "Camilo Valencia");
    strcpy(client1.id, "000000001");
    client1.credit = 1000000;
    strcpy(client1.address, "Calle 1, Carrera 1 ciudad bolivar");

    printf("The client name is: %s\n", client1.name);
    printf("The client ID is: %s\n", client1.id);
    printf("The client credit is: %f\n", client1.credit);
    printf("The client address is: %s\n", client1.address);

    return 0;
}