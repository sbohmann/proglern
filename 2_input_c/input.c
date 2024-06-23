#include <stdlib.h> // for atoi
#include <stdio.h> // for printf, getline
#include <memory.h> // for free

int readNumber() {
    char *buffer = NULL;
    size_t size = 20;
    getline(&buffer, &size, stdin);
    int result = atoi(buffer);
    free(buffer);
    return result;
}

int main() {
    printf("Calculating a + b * c, and also the result * d\n");
    printf("Please enter a: ");
    int a = readNumber();
    printf("Please enter b: ");
    int b = readNumber();
    printf("Please enter c: ");
    int c = readNumber();

    int result = a + b * c;
    printf("Result (%d + %d * %d): %d\n", a, b, c, result);

    printf("Please enter c: ");
    int d = readNumber();

    printf("Result * %d: %d\n", result, result * d);
}
