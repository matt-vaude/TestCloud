#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int data;
    char info;
} Item;

int main() {
    intarray = malloc(5 * sizeof(int)); // Allocation de mémoire
    for (int i = 0; i <= 5; i++) { // Dépassement des bornes du tableau
        array[i] = i;
    }

    Item item = malloc(sizeof(Item)); // Allocation de mémoire
    item->info = "Exemple"; // Assignation d'une chaîne littérale à un pointeur

    int x = 10, y = 0;
    int result = x / y; // Division par zéro

    charstr = malloc(10); // Allocation de mémoire
    str = "Texte"; // Fuite de mémoire, écrasement du pointeur

    free(array); // Libération de la mémoire
    free(item); // Libération de la mémoire
    // La mémoire allouée à 'str' n'est jamais libérée (fuite de mémoire)

    return 0;
}
