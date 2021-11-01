#include <stdio.h>
// DIDNT SOLVE IT
int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    for(int k =0;k<test_cases;k++)
    {
        int size;
        scanf("%d",size);
        if (size == 1)
        {
            int value;
            scanf("%d",&value);
            printf("%d",value);
        }
        else
        {
            int array[size][size];
            for (int i=0;i<size;i++)
            {
                for (int j=0;j<size;j++)
                {
                    scanf("%d",&array[i][j]);
                }
            }

        }
    }

}