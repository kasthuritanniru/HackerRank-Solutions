#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return GCD(b, a % b);
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b, target;
    scanf("%d %d %d", &a, &b, &target);
    int gcd = GCD(a, b);
    if (gcd == 0)
    {
        printf("NO");
    }
    else if (target % gcd == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
