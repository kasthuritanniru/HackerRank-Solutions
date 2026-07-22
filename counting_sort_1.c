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
    int count[n];
    for (int i = 0; i < 100; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 0 && a[i] <= n)
            count[a[i]]++;
    }
    for (int i = 0; i < 100; i++)
    {
        printf("%d ", count[i]);
    }
    return 0;
}
