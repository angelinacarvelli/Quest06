#include <stdio.h>
#include <stdlib.h>

int my_recursive_pow(int param_1, int param_2) {
    if (param_2 < 0) {
        return 0;
    }
    if (param_2 == 0) {
        return 1;
    }
    return param_1 * my_recursive_pow(param_1, param_2 - 1);
}

int main() {
    printf("2 ^ 2 = %d\n", my_recursive_pow(2, 2));
    printf("2 ^ 0 = %d\n", my_recursive_pow(2, 0));
    printf("2 ^ -1 = %d\n", my_recursive_pow(2, -1));
    printf("3 ^ 15 = %d\n", my_recursive_pow(3, 15));
    return 0;
}