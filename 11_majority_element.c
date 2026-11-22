
#include <stdio.h>

int main() {
    int a[100], n, i;
    int candidate, count = 0, frequency = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (count == 0)
            candidate = a[i];

        if (a[i] == candidate)
            count++;
        else
            count--;
    }

    for (i = 0; i < n; i++) {
        if (a[i] == candidate)
            frequency++;
    }

    if (frequency > n / 2)
        printf("Majority element = %d", candidate);
    else
        printf("No majority element exists");

    return 0;
}
