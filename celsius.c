#include <stdio.h>

int main() {
    float celsius, fahrenheit;


    printf(" Input celsius");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9/5) + 32;


    printf("%.2f celsius value %.2f fahrenheit \n", celsius, fahrenheit);

    return 0;
}
