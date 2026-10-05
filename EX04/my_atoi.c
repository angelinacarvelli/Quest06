#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int my_atoi(char* param_1) {
    if (param_1 == ((void*)0)) {
        return 0;
    }

    int index = 0;
    long long result = 0;
    int sign = 1;

    while (param_1[index] == ' ' || param_1[index] == '\t' || param_1[index] == '\n' || 
           param_1[index] == '\v' || param_1[index] == '\f' || param_1[index] == '\r') {
        index++;
    }

    if (param_1[index] == '-') {
        sign = -1;
        index++;
    } else if (param_1[index] == '+') {
        index++;
    }

    while (param_1[index] >= '0' && param_1[index] <= '9') {
        result = result * 10 + (param_1[index] - '0');
        
        if (sign == 1 && result > INT_MAX) {
            return INT_MAX;
        }
        if (sign == -1 && -result < INT_MIN) {
            return INT_MIN;
        }
        
        index++;
    }

    return (int)(result * sign);
}
int main() {
    printf("\"2\" => %d\n", my_atoi("2"));
    printf("\"123\" => %d\n", my_atoi("123"));
    printf("\"-10\" => %d\n", my_atoi("-10"));
    printf("\"\" => %d\n", my_atoi(""));
    printf("\"abc\" => %d\n", my_atoi("abc"));
    printf("\" 42\" => %d\n", my_atoi(" 42"));
    printf("\"+5\" => %d\n", my_atoi("+5"));
    printf("\"42abc\" => %d\n", my_atoi("42abc"));
    printf("\"2147483648\" => %d\n", my_atoi("2147483648"));
    return 0;
}