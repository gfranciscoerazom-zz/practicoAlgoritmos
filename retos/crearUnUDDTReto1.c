#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cumputer {
    unsigned char model[10];
    unsigned short ramGb;
    unsigned short memoryGb;
    unsigned char screenSize;
};

int main() {
    unsigned char answer;
    struct cumputer computerOption1;
    strcpy(computerOption1.model, "Larom");
    computerOption1.ramGb = 4;
    computerOption1.memoryGb = 128;
    computerOption1.screenSize = 8;

    struct cumputer computerOption2;
    strcpy(computerOption2.model, "Rerito");
    computerOption2.ramGb = 8;
    computerOption2.memoryGb = 256;
    computerOption2.screenSize = 8;

    struct cumputer computerOption3;
    strcpy(computerOption3.model, "Cenchul");
    computerOption3.ramGb = 8;
    computerOption3.memoryGb = 512;
    computerOption3.screenSize = 19;

    struct cumputer computerOption4;
    strcpy(computerOption4.model, "Gibrum");
    computerOption4.ramGb = 16;
    computerOption4.memoryGb = 512;
    computerOption4.screenSize = 23;

    printf("What computer do you want to see?\n");
    printf("Option 1\n");
    printf("Option 2\n");
    printf("Option 3\n");
    printf("Option 4\n");
    scanf("%hhd", &answer);

    switch(answer) {
        case 1:
            printf("%s have this characteristics:\n", computerOption1.model);
            printf("RAM: %d GB\n", computerOption1.ramGb);
            printf("Memory: %d GB\n", computerOption1.memoryGb);
            printf("Screen size: %d inches\n", computerOption1.screenSize);
        break;

        case 2:
            printf("%s have this characteristics:\n", computerOption2.model);
            printf("RAM: %d GB\n", computerOption2.ramGb);
            printf("Memory: %d GB\n", computerOption2.memoryGb);
            printf("Screen size: %d inches\n", computerOption2.screenSize);
        break;

        case 3:
            printf("%s have this characteristics:\n", computerOption3.model);
            printf("RAM: %d GB\n", computerOption3.ramGb);
            printf("Memory: %d GB\n", computerOption3.memoryGb);
            printf("Screen size: %d inches\n", computerOption3.screenSize);
        break;

        case 4:
            printf("%s have this characteristics:\n", computerOption4.model);
            printf("RAM: %d GB\n", computerOption4.ramGb);
            printf("Memory: %d GB\n", computerOption4.memoryGb);
            printf("Screen size: %d inches\n", computerOption4.screenSize);
        break;

        default:
            printf("Unknown");
        break;
    }

    return 0;
}