#include <stdio.h>
int InsertionSort(int arr[],int n);
int PrintElements(int arr[],int n);
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    // int temp = size; 
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    arr[size] = InsertionSort(arr,size);
    // PrintElements(arr,size);
    if (size%2 ==0){
        printf("%d",arr[size/2]);
    }
    else{
        printf("%d ",arr[(size)/2]);
    }
}
int InsertionSort(int arr[],int n){
    int i,check,j,flag;
    for(i=0;i<n;i++){
        flag=0;
        check = arr[i];
        j=i-1;
        while(j >= 0 && arr[j] > check){
            flag=1;
            arr[j+1] = arr[j];
            j = j-1;
            // PrintElements(arr,n);
        }
        arr[j+1]=check;
    }
    return arr[n];
}
int PrintElements(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
