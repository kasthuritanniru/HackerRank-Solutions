#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int binarygcd(int a, int b)
{
    int shift = 0;
    if (a == 0)
        return b;
    if (b == 0)
        return a;
    while ((a % 2 == 0) && (b % 2 == 0))
    {
        a = a / 2;
        b = b / 2;
        shift++;
    }
    while (a % 2 == 0)
    {
        a = a / 2;
    }
    while (b != 0)
    {
        while (b % 2 == 0)
        {
            b = b / 2;
        }
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a * (1 << shift);
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", binarygcd(a, b));
    return 0;
}
