// write a program to find the Element that  appears most frequently in an array.
#include <stdio.h>

int main() {
    int a[10], n, maxCount = 0, element;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            element = a[i];
        }
    }

    printf("Most frequent element = %d\n", element);
    return 0;
}
