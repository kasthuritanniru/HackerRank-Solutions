#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", n ^ (1 << k));
    return 0;
}
