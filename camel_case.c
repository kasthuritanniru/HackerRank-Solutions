#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    char str[n][100];
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%99[^,\n]", str[i]);
        if (i < n - 1)
        {
            getchar();
        }
    }
    getchar();
    char pattern[100];
    scanf("%99s", pattern);
    int valid = 0;
    int len = strlen(pattern);
    for (int i = 0; i < n; i++)
    {
        char upper[100];
        int k = 0;
        for (int j = 0; str[i][j] != '\0'; j++)
        {
            if (isupper((unsigned)str[i][j]))
            {
                upper[k] = str[i][j];
                k++;
            }
        }
        upper[k] = '\0';
        int p = 0;
        for (int j = 0; upper[j] != '\0' && p < len; j++)
        {
            if (upper[j] == pattern[p])
            {
                p++;
            }
        }
        if (p == len)
        {
            printf("%s\n", str[i]);
            valid = 1;
        }
    }
    if (!valid)
    {
        printf("No match found");
    }
    return 0;
}
