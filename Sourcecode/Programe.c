#include <stdlib.h>

void function_with_leak() {
    int *ptr = malloc(10 * sizeof(int)); // Allocation dynamique de mémoire
    // La mémoire allouée n'est jamais libérée
    // Cette ligne manque : free(ptr);
}

int main() {
    function_with_leak();
    // Le programme se termine sans libérer la mémoire allouée, entraînant une fuite
    return 0;
}
