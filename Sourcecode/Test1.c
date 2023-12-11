#include <stdio.h>
#include <stdlib.h>

void example_function(int n) {
    int *ptr = (int *)malloc(n * sizeof(int));
    if (ptr == NULL) {
        return; // Gestion incorrecte de l'allocation de mémoire
    }

    for (int i = 0; i <= n; i++) { // Dépassement de tableau
        ptr[i] = i * i;
    }

    free(ptr); // Libération de mémoire manquante
}

int main() {
    int a = 10;
    int b = 0; // Variable inutilisée

    if (a == 10); // Condition vide

    example_function(5); // Appel de fonction avec des erreurs potentielles

    return 0;
}
