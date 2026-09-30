#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int top = 0;
    int right = m - 1;
    int bottom = n - 1;
    int left = 0;
    int total = n * m;
    int count = 0;
    while (count < total)
    {
        for (int j = left; j <= right && count < total; j++)
        {
            printf("%d ", arr[top][j]);
            count++;
        }
        top++;
        for (int i = top; i <= bottom && count < total; i++)
        {
            printf("%d ", arr[i][right]);
            count++;
        }
        right--;
        for (int j = right; j >= left && count < total; j--)
        {
            printf("%d ", arr[bottom][j]);
            count++;
        }
        bottom--;
        for (int i = bottom; i >= top && count < total; i--)
        {
            printf("%d ", arr[i][left]);
            count++;
        }
        left++;
    }
    return 0;
}
