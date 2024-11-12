#include <stdio.h>

int main() {
    int a = 10, b = 5;

    // Multiple Ternary Operator
    char* result = (a > b) ? "a is bigger than b" : (a == b) ? "a and b are equal" : "b is bigger than a";

    printf("%s\n", result); 

    return 0;
}
