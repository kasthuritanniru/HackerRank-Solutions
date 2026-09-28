#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    scanf("%d %d", &n, &m);
    int grid[n][m];
    int fresh = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &grid[i][j]);
            if (grid[i][j] == 1)
            {
                fresh++;
            }
        }
    }
    int time = 0;
    while (fresh > 0)
    {
        int changed = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 2)
                {
                    if (i > 0 && grid[i - 1][j] == 1)
                    {
                        grid[i - 1][j] = 3;
                        changed = 1;
                    }
                    if (i < n - 1 && grid[i + 1][j] == 1)
                    {
                        grid[i + 1][j] = 3;
                        changed = 1;
                    }
                    if (j > 0 && grid[i][j - 1] == 1)
                    {
                        grid[i][j - 1] = 3;
                        changed = 1;
                    }
                    if (j < m - 1 && grid[i][j + 1] == 1)
                    {
                        grid[i][j + 1] = 3;
                        changed = 1;
                    }
                }
            }
        }
        if (changed == 0)
        {
            printf("-1");
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (grid[i][j] == 3)
                {
                    grid[i][j] = 2;
                    fresh--;
                }
            }
        }
        time++;
    }
    printf("%d", time);
    return 0;
}
