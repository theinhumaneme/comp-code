#include <stdio.h>

int main(){
    int test;
    scanf("%d",&test);
    for (int i=0;i<test;i++)
    {
        float final;
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        final = n1*n2;
        if (n1 >1000){
            printf("%f",(90/100)*final);
        }
        else{
            printf("%f\n",final);
        }
    }   
}