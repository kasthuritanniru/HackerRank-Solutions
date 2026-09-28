#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);
    int d = gcd(a, b);
    for (int y = 1; y <= 100; y++)
    {
        for (int x = -100; x <= y; x++)
        {
            if ((a * x + b * y) == d)
            {
                printf("%d %d %d", x, y, d);
                return 0;
            }
        }
    }
    return 0;
}
