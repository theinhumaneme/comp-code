#include<stdio.h>
#include<math.h>
int prime_no(int n)
{int t=1;
    if(n==1)
        t=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0){
            t=0;
        break;
        }
    }
    return t;
}
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int m,n;
        scanf("%d%d",&m,&n);
        for(int i=m;i<=n;i++)
        {
            if(prime_no(i)==1)
                printf("%d\n",i);
        }
        printf("\n");
    }
}