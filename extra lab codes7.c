// write a program to search a given number in a array.
#include <stdio.h>

int main() {
    int a[10], n, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (a[i] == key) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Element found\n");
    else
        printf("Element not found\n");

    return 0;
}
