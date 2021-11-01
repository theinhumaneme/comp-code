#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    while(test_cases>0)
    {
        int size;
        scanf("%d",&size);
        // printf("%d",size);
        int array[size];
        for(int i=0;i<size;i++)
        {   
            scanf("%d",&array[i]);
        }
        int count=0;
        for (int i=0;i<size;i++)
        {
            int num=array[i];
            for (int j =i+1;j<(size);j++)
            {
                // printf("%d %d\n",num,array[j]);
                if(num>array[j])
                {
                    count++;
                }
            }
        }
        printf("%d\n",count);
        test_cases--;
    }
    return 0;
}