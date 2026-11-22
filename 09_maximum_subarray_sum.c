
#include <stdio.h>

int main() {
    int a[100], n, i;
    int currentSum, maxSum;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    currentSum = maxSum = a[0];

    for (i = 1; i < n; i++) {
        if (currentSum + a[i] > a[i])
            currentSum += a[i];
        else
            currentSum = a[i];

        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum subarray sum = %d", maxSum);

    return 0;
}
