
#include <stdio.h>

int main() {
    int a[100], n, i, j, count;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Elements occurring exactly once: ");

    for (i = 0; i < n; i++) {
        count = 0;

        for (j = 0; j < n; j++) {
            if (a[i] == a[j])
                count++;
        }

        if (count == 1)
            printf("%d ", a[i]);
    }

    return 0;
}
