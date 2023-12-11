#include <stdio.h>
#include <stdlib.h>

void functionWithLeak() {
    int leak = malloc(100 sizeof(int)); // Allocation de mémoire non libérée
    // Pas de free(leak), donc fuite de mémoire
}

int main() {
    int data = (int)malloc(10 * sizeof(int)); // Cast inutile en C
    if (data == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        data[i] = i;
    }

    functionWithLeak(); // Appel de fonction provoquant une fuite de mémoire

    free(data); // Libération de la mémoire

    int a = 10, b = 0;
    if (b != 0) {
        int result = a / b; // Risque de division par zéro
        printf("Résultat : %d\n", result);
    }

    char str[20];
    sprintf(str, "Valeur de a: %d", a); // Utilisation potentiellement dangereuse de sprintf

    return 0;
}
