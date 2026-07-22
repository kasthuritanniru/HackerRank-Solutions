#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int *a = (int *)malloc(n * sizeof(int));
    int *b = (int *)malloc(m * sizeof(int));

    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i < m; i++)
        scanf("%d", &b[i]);

    int k = n + m;
    int *c = (int *)malloc(k * sizeof(int));

    int i = 0, j = 0, idx = 0;

    while (i < n && j < m)
    {
        if (a[i] <= b[j])
            c[idx++] = a[i++];
        else
            c[idx++] = b[j++];
    }

    while (i < n)
        c[idx++] = a[i++];

    while (j < m)
        c[idx++] = b[j++];

    if (k % 2 == 1)
    {
        printf("%.1f", (double)c[k / 2]);
    }
    else
    {
        printf("%.1f", ((double)c[k / 2 - 1] + c[k / 2]) / 2.0);
    }

    free(a);
    free(b);
    free(c);

    return 0;
}
