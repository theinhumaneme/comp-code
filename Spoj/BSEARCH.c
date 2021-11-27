#include<stdio.h>
int BinarySearch(int arr[],int n,int k);

int BinarySearch(int arr[],int n,int k){
    int i,j,mid,low,high;
    low = 0;
    high = n-1;
    while(low != high){
        mid = (low+high)/2;
        if (k== arr[mid]){
            return mid;
        }
        else if (k<arr[mid]){
            high = mid-1;
        }
        else if (k>arr[mid]){
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int size,test;
    scanf("%d %d",&size,&test);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    while(test--){
        int query;
        scanf("%d",&query);
        int index = BinarySearch(arr,size,query);
        printf("%d",index);
    }
}