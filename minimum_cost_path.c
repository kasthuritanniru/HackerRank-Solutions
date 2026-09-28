#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int minimum(int a, int b, int c)
{
    if (a < b && a < c)
    {
        return a;
    }
    else if (b < a && b < c)
    {
        return b;
    }
    return c;
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int row, col;
    int path[100][100];
    int dp[100][100];
    scanf("%d %d", &row, &col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &path[i][j]);
        }
    }
    dp[0][0] = path[0][0];
    for (int j = 1; j < col; j++)
    {
        dp[0][j] = dp[0][j - 1] + path[0][j];
    }
    for (int i = 1; i < row; i++)
    {
        dp[i][0] = dp[i - 1][0] + path[i][0];
    }
    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            int min = minimum(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
            dp[i][j] = path[i][j] + min;
        }
    }
    printf("%d", dp[row - 1][col - 1]);
    return 0;
}
