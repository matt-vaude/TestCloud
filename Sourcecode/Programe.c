#include <stdio.h>
#include <stdlib.h>

int main() {
    int data = malloc(10 sizeof(int)); // Allocation de mémoire
    int i = 0;

    if (data == NULL) {
        printf("Erreur d'allocation de mémoire\n");
        exit(1);
    }

    while (i < 15) { // Dépassement des bornes du tableau
        data[i] = i;
        printf("Valeur: %d\n", data[i]);
        i++;
    }

    int moreData = malloc(5 sizeof(int)); // Nouvelle allocation sans libération de la précédente
    if (moreData != NULL) {
        for (int j = 0; j < 5; j++) {
            moreData[j] = j * 2;
        }
    }

    free(moreData); // Libération de la seconde allocation mais pas de la première
    // La mémoire allouée à 'data' n'est jamais libérée (fuite de mémoire)

    int x = 10, y = 0;
    int result = x / y; // Division par zéro

    char *str = "Texte";
    str[0] = 't'; // Tentative de modification d'une chaîne littérale

    return 0; // Fin du programme sans libérer toute la mémoire allouée
}
