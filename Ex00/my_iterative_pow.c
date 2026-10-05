#include <stdio.h>
#include <stdlib.h>

int my_iterative_pow(int param_1, int param_2) {
    if (param_2 < 0) {
        return 0;
    }
    
    int resultat = 1;
    for (int index = 0; index < param_2; index++) {
        resultat *= param_1;
    }
    return resultat;
}

int main() {
    int resultat = my_iterative_pow(0, 0 );
    printf("Le resultat est : %d\n", resultat);
    return 0;
}