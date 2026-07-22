#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (a == INT_MIN && b == -1)
    {
        printf("%d", INT_MAX);
        return 0;
    }
    long long x = llabs((long long)a);
    long long y = llabs((long long)b);
    long long l = 0, h = x, ans = 0;
    while (l <= h)
    {
        long long mid = (l + h) / 2;
        if (mid * y <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    if ((a < 0) ^ (b < 0))
        ans = -ans;
    printf("%lld", ans);
}
