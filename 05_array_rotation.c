
#include <stdio.h>

int main() {
    int a[100], n, i, j, k, choice, temp;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    printf("1. Left Rotation\n2. Right Rotation\n");
    scanf("%d", &choice);

    if (k < 0 || (choice != 1 && choice != 2)) {
        printf("Invalid input");
        return 0;
    }

    k = k % n;

    for (i = 0; i < k; i++) {
        if (choice == 1) {
            temp = a[0];

            for (j = 0; j < n - 1; j++)
                a[j] = a[j + 1];

            a[n - 1] = temp;
        }
        else {
            temp = a[n - 1];

            for (j = n - 1; j > 0; j--)
                a[j] = a[j - 1];

            a[0] = temp;
        }
    }

    printf("Rotated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
