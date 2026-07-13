#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1);
    }
}
int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int res = fact(n);
    printf("%d", res);
    return 0;
}
