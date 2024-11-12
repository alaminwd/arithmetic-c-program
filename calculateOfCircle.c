#include <stdio.h>
 #define PI 3.1416

int main() {

    float radius, area;  

    printf("Input the Number");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("circle of area: %.2f\n", area);

    return 0;
}
