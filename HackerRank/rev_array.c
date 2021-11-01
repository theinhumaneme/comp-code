#include <stdio.h>

int main()
{
    int size;
    scanf("%d",&size);
    int array[size];
    for (int i =0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    int rev_array[size];
    for (int i =0;i<size;i++)
    {
        rev_array[i]=array[size-1-i];
    }
    for (int i =0;i<size;i++)
    {
        printf("%d ",rev_array[i]);
    }
    
}