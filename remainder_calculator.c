#include <stdio.h>

int main() {
    int num1, num2, remainder;

    
    printf("Enter First Number ");
    scanf("%d", &num1);

    printf(" Enter Second Number ");
    scanf("%d", &num2);

    remainder = num1 % num2;

    printf("Result %d ", remainder);

    return 0;
}
