#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;


    printf("principal");
    scanf("%f", &principal);

    printf("rate");
    scanf("%f", &rate);

    printf("time");
    scanf("%f", &time);

    simple_interest = (principal * rate * time) / 100;


    printf("Simple Interest : %.2f\n", simple_interest);

    return 0;
}
