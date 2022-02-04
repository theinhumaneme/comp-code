#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void gt(char input[],char player[])
{
    int g_i,g_j,temp=0,total=26,g_siz;
    int alphas[26]={0};
    g_siz=strlen(input);
        for(g_i=0;g_i<g_siz;g_i++)
        {
            alphas[input[g_i]-'a']++;
        }
        for(g_j=0;g_j<total;g_j++)
        {
            temp=temp^alphas[g_j];
        }
        if(temp!=0)
        {
            printf("%s\n",player);
        }
        else if(player[0]=='B')
        {
            printf("Santa\n");
        }
        else
        {
            printf("Banta\n");
        }
}
int main() 
{
    int Te,T;
    scanf("%d",&Te);
    for(T=0;T<Te;T++)
    {
        char player[10]="Santa";
        char input[10000];
        scanf("%s",input);
        gt(input,player);
    }
    return 0;
}