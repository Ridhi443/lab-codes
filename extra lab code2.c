// Given two integers, divide them and print the result in float (type conversion).
#include <stdio.h>
int main() 
{
    int a, b;
    float result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (b != 0) {
        result = (float)a / b;  
        printf("Result = %.2f\n", result);
    } else {
        printf("Division by zero is not allowed!\n");
    }
    return 0;
}
