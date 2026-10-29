#include <stdio.h>

int main()
{
    int a[20], b[20], c[40];
    int m, n, i, j, k;

    printf("Enter size of first array: ");
    scanf("%d", &m);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < m; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    i = j = k = 0;

    while (i < m && j < n)
    {
        if (a[i] <= b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < m)
        c[k++] = a[i++];

    while (j < n)
        c[k++] = b[j++];

    printf("Merged array:\n");
    for (i = 0; i < m + n; i++)
        printf("%d ", c[i]);

    return 0;
}
