#include<stdio.h>
int PrintElements(int arr[],int n);
int CountSort(int arr[],int n);

int PrintElements(int arr[],int n){
    for(int i=0;i<100;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
int CountSort(int arr[],int n){
    int count[100];
    for (int i=0;i<100;i++){
        count[i]=0;
    }
    for (int i=0;i<n;i++){
        count[arr[i]]++;
    }
    PrintElements(count,n);
    return 0;
}
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    // int temp = size; 
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    CountSort(arr,size);
}