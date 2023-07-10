//3. Write a program to swap values of two int variables without using the third variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value for variable a: ");
    scanf("%d", &a);

    printf("Enter value for variable b: ");
    scanf("%d", &b);

    printf("Before swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap the values of a and b using XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}

