#include <stdio.h>
#include <stdarg.h>

// Variadic function that takes an integer count and variable number of integers
int sum_integers(int count, ...) {
    va_list args;
    va_start(args, count);

    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum;
}

int main() {
    int result = sum_integers(3, 10, 20, 30);
    printf("Sum: %d\n", result);

    return 0;
}

