#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void merge(int ar[],int lo,int hi){
     int mid=(lo+hi)/2;
    int temp[hi-lo+1],p1=lo,p2=mid+1,p3=0;
    while(p1<=mid && p2<=hi){
        if(ar[p1]<ar[p2]){
            temp[p3++]=ar[p1++];
        }else{
            temp[p3++]=ar[p2++];
        }
    }
        while(p1<=mid){
            temp[p3++]=ar[p1++];
        }
        while(p2<=hi){
            temp[p3++]=ar[p2++];
        }
        for(int i=0;i<hi-lo+1;i++){
            ar[i+lo]=temp[i];
        }
    
}

void ms(int ar[],int lo,int hi){
    if(lo==hi) 
        return;
    int mid =(lo+hi)/2;
    ms(ar,lo,mid);
    ms(ar,mid+1,hi);
    merge(ar,lo,hi);
}

int BSR(int ar[],int lo,int hi,int k){

    int mid;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(ar[mid]==k){
            return mid;
        }else if(ar[mid]>k){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }
    return -1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    ms(ar,0,n-1);
    int a[n],b[n],idx=0,c=1;
    for(i=0;i<n;i++){
        if(ar[i]==ar[i+1]){
            c++;
        }else{
            a[idx]=ar[i];
            b[idx]=c;
            c=1;
            idx++;
        }
    }
    int tq;
    scanf("%d",&tq);
    while(tq--){
        int q,p;
        scanf("%d",&q);
        p=BSR(a,0,idx,q);
        printf("%d\n",b[p]);
        
    }
    return 0;
}