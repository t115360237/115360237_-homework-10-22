#include <stdio.h>

int main(void) {
    int i, j, space;

    // (A)
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (B)
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (C)
    for (i = 10; i >= 1; i--) {
        for (space = 0; space < 10 - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (D)
    for (i = 1; i <= 10; i++) {
        for (space = 1; space <= 10 - i; space++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}

