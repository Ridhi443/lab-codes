/* Find the contiguous subarray within an array that has the largest product.
*/

#include <stdio.h>

int main() {
    int a[] = {2, 3, -2, 4};
    int n = 4;
    int max = a[0], min = a[0], result = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < 0) {
            int temp = max;
            max = min;
            min = temp;
        }

        max = (a[i] > max * a[i]) ? a[i] : max * a[i];
        min = (a[i] < min * a[i]) ? a[i] : min * a[i];

        if (max > result)
            result = max;
    }

    printf("Maximum product = %d", result);
    return 0;
}
