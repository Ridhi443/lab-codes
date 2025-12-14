/* Print the series: 1! + 2! + 3! + 4! + ... + n!
*/

#include <stdio.h>

int main() {
    int n, i;
    long long fact = 1, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;   
        sum = sum + fact; 
    }

    printf("Sum of series = %lld", sum);

    return 0;
}
