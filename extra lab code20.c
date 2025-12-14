/* For each element, print the product of all other elements
without using division.
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], result[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        result[i] = 1;
        for (int j = 0; j < n; j++) {
            if (i != j)
                result[i] *= a[j];
        }
    }

    printf("Output array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);

    return 0;
}
