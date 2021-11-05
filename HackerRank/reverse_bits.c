#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t,test_cases;
    scanf("%d",&test_cases);
    for(t=0;t<test_cases;t++)
    {
    long long unsigned int j,i=0,sum=0,count=0,n,array[32]={0};
    scanf("%lld",&n);
    while(n!=0)
    {
        array[i]=n%2;
        n=n/2;
        i++;
        count++;
    }
    for(j=0;j<=31;j++)
    {
        sum=sum+(array[j]*pow(2,31-j));
    }

        printf("%lld\n",sum);
    }
    
    return 0;
}