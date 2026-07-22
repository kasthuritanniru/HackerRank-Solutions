#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    int *count = (int *)malloc((max + 1) * sizeof(int));
    if (count == NULL)
        return 1;
    for (int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[a[i]]++;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        free(count);
        return 1;
    }
    int b = 0;
    int j = 0;
    for (int i = 0; i <= max; i++)
    {
        b = count[i];
        while (b > 0)
        {
            arr[j] = i;
            j++;
            b--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(count);
    free(arr);
    return 0;
}
