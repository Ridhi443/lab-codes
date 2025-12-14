/* Print the series: 
1 + x/1! + x^2/2! + x^3/3! + ... + x^n/n!
*/

#include <stdio.h>

int main() {
    int n, i;
    float x, term = 1, sum = 1;

    printf("Enter x and n: ");
    scanf("%f %d", &x, &n);

    for (i = 1; i <= n; i++) {
        term = term * x / i;
        sum += term;
    }

    printf("Sum = %.2f", sum);
    return 0;
}
