
#include <stdio.h>

int main() {
    int a[100], n, target, i, j, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter target sum: ");
    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == target) {
                printf("Pair found: %d and %d\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No pair found");

    return 0;
}

