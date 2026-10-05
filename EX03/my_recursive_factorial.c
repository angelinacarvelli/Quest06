#include <stdio.h>
#include <stdlib.h>

int my_recursive_factorial(int param_1) {
    if (param_1 < 0) {
        return 0;
    }
    if (param_1 == 0 || param_1 == 1) {
        return 1;
    }
    return param_1 * my_recursive_factorial(param_1 - 1);
}

int main() {
    printf("2! = %d\n", my_recursive_factorial(2));
    printf("3! = %d\n", my_recursive_factorial(3));
    printf("-1! = %d\n", my_recursive_factorial(-1));
    printf("0! = %d\n", my_recursive_factorial(0));
    return 0;
}