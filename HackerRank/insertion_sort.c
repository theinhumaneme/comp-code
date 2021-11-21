#include <stdio.h>

void insertionSort(int size,int array[]){
    int temp,i,j;
    for(i =0;i<size;i++){
        int temp = array[i];
        for(j=i-1;j>0;j--)
        {
            if (temp<array[j]){
                array[j+1]=array[j];
            }
            else{
                array[j+1]=temp;
            }
            // for(int k=0;k<size;k++){
            //     printf("%d\t",array[k]);
            // }
        }
    // printf("\n");
    }
    for(int k=0;k<size;k++){
        printf("%d\t",array[k]);
    }
}
int main()
{
    int size;
    scanf("%d",&size);
    int array[size];
    for(int k=0;k<size;k++){
        scanf("%d",&array[k]);
    }
    insertionSort(size,array);
}
