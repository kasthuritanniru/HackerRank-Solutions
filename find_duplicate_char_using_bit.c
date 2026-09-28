#include <stdio.h>

char s[100005];

int main(void)
{
    scanf("%100004s", s);

    unsigned int seen = 0, dup = 0, printed = 0;
    for (int i = 0; s[i]; i++)
    {
        unsigned int bit = 1u << (s[i] - 'a');
        if (seen & bit)
            dup |= bit;
        seen |= bit;
    }
    if (dup == 0)
    {
        printf("No duplicates\n");
        return 0;
    }
    int first = 1;
    for (int i = 0; s[i]; i++)
    {
        unsigned int bit = 1u << (s[i] - 'a');
        if ((dup & bit) && !(printed & bit))
        {
            if (!first)
                printf(" ");
            first = 0;
            printf("%c", s[i]);
            printed |= bit;
        }
    }
    printf("\n");
    return 0;
}
