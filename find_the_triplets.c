#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(const void *a, const void *b)
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
    int x;
    scanf("%d", &x);
    qsort(a, n, sizeof(int), cmp);
    int found = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
            continue;
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = a[i] + a[left] + a[right];
            if (sum == x)
            {
                printf("%d %d %d \n", a[i], a[left], a[right]);
                found = 1;
                while (left < right && a[left] == a[left + 1])
                    left++;
                while (left < right && a[right] == a[right - 1])
                    right--;
                left++;
                right--;
            }
            else if (sum < x)
                left++;
            else
                right--;
        }
    }
    if (!found)
    {
        printf("No Triplet Found");
    }
    return 0;
}
