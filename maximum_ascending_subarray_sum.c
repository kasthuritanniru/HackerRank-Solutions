#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int maxsub(int a[], int n)
{
    int sum = a[0], max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            sum += a[i];
        }
        else
            sum = a[i];
        if (sum > max)
        {
            max = sum;
        }
    }
    return max;
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
    printf("%d", maxsub(a, n));
    return 0;
}
