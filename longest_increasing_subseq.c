#include <stdio.h>
#include <stdlib.h>

int array[6] = {3,2,6,4,5,1};
int n = 6;

int main()
{
    int i,j;
    int L[6] = {};
    for(i=1; i<n ; i++) {
        for(j=0; j<i; j++) {
            if((array[j] < array[i]))
                L[i] = L[j];
        }
    L[i] = array[i];
    }

    for(i=0; i<n; i++)
        printf("%d ", L[i]);
    printf("\n");

    return 0;
}
