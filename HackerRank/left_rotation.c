#include <stdio.h>

int main()
{
    int size,offset;
    scanf("%d %d",&size,&offset);
    int array[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<offset;i++)
    {
        int temp;
        temp=array[0];
        for (int j=0;j<size-1;j++)
        {
            array[j]=array[j+1];
        }
        array[size-1]=temp;
    }
    for(int i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
}