/*
 * Dynamic Programming:Maximum-sum contiguous array - kadane's algorithm
 * https://www.youtube.com/watch?v=dVsspsEEHWE
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX(a,b) (((a)>(b))?(a):(b))

int array[6] = {1,-2,3,4,-7,22};
int n = 6;

int main()
{

    int cur_max = 0;
    int total_max = 0;
    int i;

    for (i = 0; i < n; i++) {
        cur_max = MAX(array[i], array[i]+cur_max);
        total_max = MAX(cur_max, total_max);
    }
    printf("total_max : %d\n", total_max);

    return 0;
}
