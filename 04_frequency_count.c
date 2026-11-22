
#include <stdio.h>

int main() {
    int a[100], visited[100] = {0};
    int n, i, j, count;

    printf("Enter array size: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100) {
        printf("Invalid array size");
        return 0;
    }

    printf("Enter array elements: ");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Element frequencies:\n");

    for (i = 0; i < n; i++) {
        if (visited[i])
            continue;

        count = 1;

        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d occurs %d times\n", a[i], count);
    }

    return 0;
}
