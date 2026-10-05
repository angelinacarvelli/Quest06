#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int my_iterative_factorial(int param_1) {
    if (param_1 < 0) {
        return 0;
    }
    int result = 1;

    for (int index = 1; index <= param_1; index++) {
        if (result > INT_MAX / index) {
            return 0;
        }
        result *= index;
    }
    return result;
}

int main() {
    printf("2! = %d\n", my_iterative_factorial(2));
    printf("3! = %d\n", my_iterative_factorial(3));
    printf("4! = %d\n", my_iterative_factorial(4));
    printf("0! = %d\n", my_iterative_factorial(0));
    printf("-5! = %d\n", my_iterative_factorial(-5));
    printf("13! = %d\n", my_iterative_factorial(13));
    return 0;
}