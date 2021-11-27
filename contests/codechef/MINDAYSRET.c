#include <stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);
        if (n%k == 0){
            printf("%d",(n/k));
        }
        else{
            printf("%d",(n/k)+1);
        }
    }
}
int main() 
{
    int t,test;
    scanf("%d",&test);
    for(t=0;t<test;t++)
    {
    int tot,pre,q,r;
    scanf("%d %d",&tot,&pre);
    q= tot/pre;
    r= tot%pre;
    if(r==0)
    {
        printf("%d\n",q);
    }
    if((r!=0)&&(r<pre))
    {
        printf("%d\n",q+1);
    }
    }
	return 0;
}