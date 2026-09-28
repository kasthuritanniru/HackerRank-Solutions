#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);

    if (n & (1 << k))
        printf("1");
    else
        printf("0");
    return 0;
}
