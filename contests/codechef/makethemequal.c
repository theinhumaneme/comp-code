#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int t, Te;
    scanf("%d", &Te);
    for (t = 0; t < Te; t++)
    {
        int i, j, size, min, sum;
        scanf("%d", &size);
        int qarr[size], qarr2[size];
        for (i = 0; i < size; i++)
        {
            scanf("%d", &qarr[i]);
        }
        min = 1000;
        for (i = 0; i < size; i++)
        {
            sum = 0;
            for (j = 0; j < size; j++)
            {
                int diff = abs(qarr[i] - qarr[j]);
                sum = sum + diff;
                qarr2[i] = sum;
            }
        }
        for (i = 0; i < size; i++)
        {
            if (qarr2[i] < min)
            {
                min = qarr2[i];
            }
        }
        /*for(i=0;i<size;i++)
        {
            printf("%d.",qarr2[i]);
        }*/
        printf("%d\n", min);
    }
    return 0;
}