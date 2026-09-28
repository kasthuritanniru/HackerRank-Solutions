#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[100];
    scanf("%s", s);
    int freq[27] = {0};
    for (int i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 'a']++;
    }
    int max = 0;
    for (int i = 0; i <= 26; i++)
    {
        if (freq[i] > max)
        {
            max = freq[i];
        }
    }
    printf("%d", max);
    return 0;
}
