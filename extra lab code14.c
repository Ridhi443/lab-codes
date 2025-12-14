/* Given an array of integers and a target sum,
find a contiguous subarray that adds up to the target sum.
*/

#include <stdio.h>

int main() {
    int a[] = {1, 4, 20, 3, 10, 5};
    int n = 6, sum = 33;
    int curr = 0, start = 0;

    for (int i = 0; i < n; i++) {
        curr += a[i];

        while (curr > sum && start < i) {
            curr -= a[start++];
        }

        if (curr == sum) {
            printf("Subarray found from index %d to %d\n", start, i);
            return 0;
        }
    }

    printf("No subarray found");
    return 0;
}
