#include <stdio.h>

int main()
{
    int t,one,two;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&one,&two);
        int total_value = 1*one + 2*two;
        if (((total_value/2)%2)==0){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
}