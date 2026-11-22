
#include <stdio.h>

int main() {
    int a[100], n, i, pos, value, choice;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("1. Insert\n2. Delete\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter position and value: ");
        scanf("%d %d", &pos, &value);

        if (pos < 1 || pos > n + 1 || n == 100) {
            printf("Invalid position or array full");
            return 0;
        }

        for (i = n; i >= pos; i--)
            a[i] = a[i - 1];

        a[pos - 1] = value;
        n++;
    }
    else if (choice == 2) {
        printf("Enter position to delete: ");
        scanf("%d", &pos);

        if (pos < 1 || pos > n) {
            printf("Invalid position");
            return 0;
        }

        for (i = pos - 1; i < n - 1; i++)
            a[i] = a[i + 1];

        n--;
    }
    else {
        printf("Invalid choice");
        return 0;
    }

    printf("Updated array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
