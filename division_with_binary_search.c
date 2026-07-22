#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a, b;
    scanf("%d %d", &a, &b);
    int ans = 0;
    while (a >= b)
    {
        a -= b;
        ans++;
    }
    printf("%d", ans);
    return 0;
}
