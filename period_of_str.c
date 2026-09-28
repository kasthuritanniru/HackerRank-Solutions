#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch[100];
    scanf("%99s", ch);
    int len = strlen(ch);
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            int k = 0;
            while (j + k < len && ch[i + k] == ch[j + k])
            {
                k++;
            }
            if (k > max && k < len / 2)
                max = k;
        }
    }
    printf("%d", max);
    return 0;
}
