/* write a program to print the sum of the following series.
  1 + 1/2 + 1/3 + 1/4 + .... + 1/n */
#include <stdio.h>

int main() {
    int n;
  int numerator=1,denominator=1;
float sum= 0.0;
    printf("Enter value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += (float)numerator / denominator;
    denominator += 1;
    }
    printf("Sum of series = %.2f\n", sum);
    return 0;
}
