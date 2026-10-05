#include <stdio.h>

int my_fibonacci(int param_1) {
    if (param_1 < 0) {
        return -1;
    }
    
    if (param_1 == 0) {
        return 0;
    }
    if (param_1 == 1) {
        return 1;
    }
    
    return my_fibonacci(param_1 - 1) + my_fibonacci(param_1 - 2);
}

int main() {
    printf("Fibonacci(0) = %d\n", my_fibonacci(0));
    printf("Fibonacci(1) = %d\n", my_fibonacci(1));
    printf("Fibonacci(2) = %d\n", my_fibonacci(2));
    printf("Fibonacci(4) = %d\n", my_fibonacci(4));
    printf("Fibonacci(-1) = %d\n", my_fibonacci(-1));
    printf("Fibonacci(30) = %d\n", my_fibonacci(30));
    return 0;
}