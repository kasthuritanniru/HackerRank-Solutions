#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int min, max;
    scanf("%d %d", &min, &max);
    int *count = (int *)malloc((max - min + 1) * sizeof(int));
    int k = 0;
    for (int i = min; i <= max; i++)
    {
        int value = i;
        int count1 = 1;
        while (value != 1)
        {
            if (value % 2 == 0)
            {
                value = value / 2;
            }
            else
            {
                value = 3 * value + 1;
            }
            count1++;
        }
        count[k++] = count1;
    }
    int max1 = 0;
    for (int i = 0; i < k; i++)
    {
        if (count[i] > max1)
        {
            max1 = count[i];
        }
    }
    free(count);
    printf("%d %d %d", min, max, max1);
    return 0;
}
