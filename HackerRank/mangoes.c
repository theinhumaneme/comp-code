#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    int count_variable=0;
    while(t--)
    {
        count_variable++;
        int n;
        scanf("%d",&n);
        int a[n],m[n],top=-1,top_element_1=-1;
        int  z=n;
        printf("Case %d:\n",count_variable);
        while(z--)
        {
            
            
            char s;
            if(top<0)
            {
                top=-1;
                top_element_1=-1;
            }
            scanf(" %c ",&s);
            if(s=='A')
            {
                int p;
                scanf("%d",&p);
                a[++top]=p;
                if(top_element_1==-1)
                {
                    m[++top_element_1]=p;
                }
                else if(m[top_element_1]<=p)
                {
                    m[++top_element_1]=p;
                }
            }
            else if(s=='R')
            {
                if(m[top_element_1]==a[top])
                {
                    top_element_1--;
                    top--;
                }
            
                else
                {
                    top--;
                }
                
            }
            else if(s=='Q')
            {
                if(top_element_1<0)
                {
                    printf("Empty\n");
                }
                
                else{
                    printf("%d\n",m[top_element_1]);
                }
            }
            
        }
    }
    return 0;
}