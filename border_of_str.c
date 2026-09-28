#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char ch[100];
    for (int i = 0; ch[i] != '\0'; i++)
    {
        scanf("%s", &ch[i]);
    }
    int len = strlen(ch);
    int count = 0;
    for (int i = 0; i <= len / 2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (ch[j] != ch[len - 1 - i])
            {
                break;
            }
        }
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        printf("%c", ch[i]);
    }

    return 0;
}
