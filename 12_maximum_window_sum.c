
#include <stdio.h>

int main() {
    int a[100], n, k, i;
    int sum = 0, maxSum;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k <= 0 || k > n) {
        printf("Invalid value of k");
        return 0;
    }

    for (i = 0; i < k; i++)
        sum += a[i];

    maxSum = sum;

    for (i = k; i < n; i++) {
        sum = sum - a[i - k] + a[i];

        if (sum > maxSum)
            maxSum = sum;
    }

    printf("Maximum sum of %d consecutive elements = %d", k, maxSum);

    return 0;
}
