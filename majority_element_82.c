#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), compare);
    int key = a[n / 2];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            count++;
        }
    }
    if (count > n / 2)
    {
        printf("%d", key);
    }
    else
    {
        printf("-1");
    }
    return 0;
}
