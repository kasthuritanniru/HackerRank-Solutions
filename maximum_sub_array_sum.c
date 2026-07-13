#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

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
    int max = a[0];
    int Sum = a[0];

    for (int i = 1; i < n; i++)
    {
        if (Sum + a[i] > a[i])
            Sum = Sum + a[i];
        else
            Sum = a[i];

        if (Sum > max)
            max = Sum;
    }

    printf("%d", max);
    return 0;
}
