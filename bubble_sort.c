#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    for (int i=0;i<test_cases;i++)
    {
        int size;
        scanf("%d",&size);
        int array[size];
        for (int i =0;i <size;i++)
        {
            scanf("%d",&array[i]);
        }
        int count=0;
        for (int i=0;i<size;i++)
        {
            for (int j=0;j<size-i-1;j++)
            {
                if (array[j]<array[j+1])
                {
                    int temp=array[j+1];
                    array[j+1]=array[j];
                    array[j]=temp;
                    count++;
                }
            }
        }
        // for (int i =0;i <size;i++)
        // {
        //     printf("%d\t",array[i]);
        // }
        printf("\n%d\n",count);
    }
}