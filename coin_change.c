#include <stdio.h>
#define INF 1e7
#include <string.h>
#include <math.h>
#include <stdlib.h>

int min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int v, n;
    int dp[100][100];
    int coins[100];
    scanf("%d %d", &v, &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &coins[i]);
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0;
    }
    for (int j = 1; j <= v; j++)
    {
        dp[0][j] = INF;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= v; j++)
        {
            if (coins[i - 1] <= j)
            {
                if (dp[i][j - coins[i - 1]] != INF)
                {
                    dp[i][j] = min(dp[i - 1][j], dp[i][j - coins[i - 1]] + 1);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
    if (dp[n][v] >= INF)
    {
        printf("-1");
    }
    else
    {
        printf("%d", dp[n][v]);
    }
    return 0;
}
