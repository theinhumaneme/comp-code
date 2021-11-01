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
        for (int i=0;i<size;i++)
        {
            int min=i;
            int flag=0,temp;
            for (int j=0;j<size;j++)
            {
                if (array[min]<array[j])
                {
                    min=j;
                    flag++;
                }
            }
            if (flag !=0)
            {   
                temp = array[i];
                array[i]=array[min];
                array[min]=temp;
                printf("%d ",min);
            }
            else{
                printf("0 ");
            }
            // for (int i =0;i <size;i++)
            // {
            //     printf("%d\t",array[i]);
            // }
            // printf("\n");
        }
        printf("\n");
        for (int i =0;i <size;i++)
        {
            printf("%d\t",array[i]);
        }
    }
}