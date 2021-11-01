#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0;i<test_cases;i++)
    {
        int size;
        scanf("%d",&size);
        long long int array[size];
        for(int j=0;j<size;j++)
        {
            scanf("%lld",&array[j]);
        }
        long long int sum=0;
        for(int j=0;j<size;j++)
        {
            sum=sum+array[j];
        }
        printf("%lld\n",sum);
    }
}