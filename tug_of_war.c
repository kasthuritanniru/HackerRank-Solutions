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
    int sum = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    qsort(arr, n, sizeof(int), compare);
    int mid = sum / 2;
    int count = 0;
    int person = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] + count <= mid)
        {
            count += arr[i];
            person++;
        }
        else if (arr[i] + count > mid)
        {
            count -= arr[i - 1];
            person--;
        }
    }
    if (person == n / 2 && sum % 2 == 0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    return 0;
}
