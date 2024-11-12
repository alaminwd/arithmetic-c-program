#include <stdio.h>

int main() {
    float num1, num2, num3, average;


    printf("Enter First Number ");
    scanf("%f", &num1);

    printf("Enter Second Number ");
    scanf("%f", &num2);

    printf("Enter Third Number ");
    scanf("%f", &num3);


    average = (num1 + num2 + num3) / 3;

    printf("Average: %.2f\n", average);

    return 0;
}
