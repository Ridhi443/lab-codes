// write a program to copy all elements of array into another.
#include <stdio.h>

int main() {
    int a[10], b[10], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++)
        b[i] = a[i];

    printf("Copied array:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}
