#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int) * 5);
    int i;

    // Example of a potential memory leak
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Example of a potential buffer overflow
    for (i = 0; i <= 5; i++) {
        ptr[i] = i;
    }

    // Example of unused variable
    int unused = 10;

    printf("This is a test program\n");

    // Example of potential null pointer dereference
    free(ptr);
    ptr = NULL;
    int value = *ptr;

    return 0;
}
