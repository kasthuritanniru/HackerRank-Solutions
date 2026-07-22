#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    int count = 0;
    while (n > 0)
    {
        count += (n & 1);
        n >>= 1;
    }
    printf("%d", count);
    return 0;
}
