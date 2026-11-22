#include <stdio.h>

int main() {
    int n, a[100], i;
    int min, max, secondMin, secondMax;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }

    secondMin = max;
    secondMax = min;

    for (i = 0; i < n; i++) {
        if (a[i] > min && a[i] < secondMin)
            secondMin = a[i];

        if (a[i] < max && a[i] > secondMax)
            secondMax = a[i];
    }

    if (secondMin == max)
        printf("Second smallest does not exist\n");
    else
        printf("Second smallest = %d\n", secondMin);

    if (secondMax == min)
        printf("Second largest does not exist\n");
    else
        printf("Second largest = %d\n", secondMax);

    return 0;
}
