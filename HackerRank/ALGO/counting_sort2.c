#include<stdio.h>
int PrintElements(int arr[],int n);
int CountSort(int arr[],int largest,int n);
int PrintElementsOrder(int arr[],int arr2[],int n);

int PrintElements(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
int PrintElementsOrder(int arr[],int arr2[],int n){
    for(int i=0;i<100;i++){
        if( arr[i] >0 )
        {
            for(int j = arr[i];j>0;j--){
                printf("%d ",(i));
            }
        }
    }
    printf("\n");
    return 0;
}
int CountSort(int arr[],int largest,int n){
    int count[100];
    for (int i=0;i<100;i++){
        count[i]=0;
    }
    for (int i=0;i<n;i++){
        count[arr[i]]++;
    }
    PrintElementsOrder(count,arr,n);
    return 0;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    // int temp = size; 
    int temp =0;
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if (arr[i]>temp){
            temp=arr[i];
        }
        else{
            continue;
        }
    }
    CountSort(arr,temp,size);
}