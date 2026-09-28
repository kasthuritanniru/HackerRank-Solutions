#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[100001], p[100001];
    scanf("%s", s);
    scanf("%s", p);
    int i = 0, j = 0;
    int star = -1;
    int match = 0;
    while (s[i])
    {
        if (p[j] == s[i] || p[j] == '?')
        {
            i++;
            j++;
        }
        else if (p[j] == '*')
        {
            star = j;
            match = i;
            j++;
        }
        else if (star != -1)
        {
            j = star + 1;
            match++;
            i = match;
        }
        else
        {
            printf("0");
            return 0;
        }
    }
    while (p[j] == '*')
    {
        j++;
    }
    if (p[j] == '\0')
        printf("1");
    else
        printf("0");
    return 0;
}
