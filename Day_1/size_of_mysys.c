#include <stdio.h>
#include <limits.h>

int main() {
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Minimum int: %d\n", INT_MIN);
    printf("Maximum int: %d\n", INT_MAX);

    return 0;
}