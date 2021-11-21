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
    InsertionSort(arr,size);
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
        // PrintElements(arr,n);
        if(flag == 1){
            PrintElements(arr,n);
        }
        // else{
        //     continue;
        // }
    }
    return 0;
}
int PrintElements(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
