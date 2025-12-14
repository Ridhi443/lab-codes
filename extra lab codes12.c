/* Print the series using numerator/denominator method:
1 − 1/2 + 1/3 − 1/4 + ... ± 1/n
*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum -= (float)numerator / denominator;
        else
            sum += (float)numerator / denominator;

        denominator++;  
    }

    printf("Sum = %.2f", sum);
    return 0;
}
