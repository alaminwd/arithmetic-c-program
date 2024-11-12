#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter The First Nubmer");
    scanf("%d", &num1);

    printf("Enter The Second Nubmer");
    scanf("%d", &num2);

    //addition
    printf("%d\n", num1 + num2);

    //subtraction
    printf("%d\n", num1 - num2);


    //multiplication
    printf("%d\n", num1 * num2);


    // division
    if (num2 != 0) {
        printf("%.2f\n", (float)num1 / num2); 
    } else {
        printf("Zero \n");
    }
    

    return 0;
}
