#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int InsertionSort(int arr[],int n);
int SumPair(int arr[],int n,int k);

int InsertionSort(int arr[],int n){
    int i,check,j;
    for(i=1;i<n;i++){
        check = arr[i];
        j=i-1;
        while(j >= 0 && arr[j] > check){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1]=check;
    }
    return arr[n];
}

int SumPair(int arr[],int n,int k){
    arr[n] = InsertionSort(arr,n);
    // int p1=0,p2=n-1;
    // while(p1!=p2){
    //     if ((arr[p2]-arr[p1]) >k){
    //         p2--;
    //     }
    //     else if((arr[p2]-arr[p1])<k){
    //         p1++;
    //     }
    //     else if ((arr[p1]-arr[p2])==k)
    //     {
    //         return 7;
    //     }
    //     printf("%d %d\n",arr[p1],arr[p2]);
    // }
    // return 9;
    for(int c=n-1;c>0;c--){
        int low,high,mid;
        int number = arr[c]-k;
        low =0;
        high=n-1;
        while(low != high){
            mid = (low+high)/2;
            if (number>arr[mid]){
                low = mid+1;
            }
            else if (number<arr[mid]){
                high = mid-1;
            }
            else if (number==arr[mid]){
                return 7;
            }
        }
        return 9;
    }
    // int low,high,mid;
    // low =0;
    // high=n-1;
    // while(low != high){
    //     mid = (low+high)/2;
    //     if (k>arr[mid]){
    //         low = mid+1;
    //     }
    //     else if (k<arr[mid]){
    //         high = mid-1;
    //     }
    //     else if (k==arr[mid]){
    //         return 7;
    //     }
    // }
    // return 9;
    return 9;
}
int main() {
    int test;
    scanf("%d",&test);
    while(test--){
        int sum,size;
        scanf("%d %d",&size,&sum);
        int arr[size];
        for(int k=0;k<size;k++){
            scanf("%d",&arr[k]);
        }
        if(SumPair(arr,size,sum)==7){
          printf("true\n");
        }
        else{
            printf("false\n");
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
