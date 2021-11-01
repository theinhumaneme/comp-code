#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int apowerb(int a, int N)
{
    int ans=1;
    while (N!=0)
    {
        if (N&1)
        {
            ans = ans*a;
            a = a*a;
        }
        N = N<<1;
    }
    return ans%1000000007;
}
int main()
{   
    int number,power,test_cases;
    scanf("%d",&test_cases);
    while(test_cases>0)
    {
        scanf("%d %d",&number,&power);
        int result = apowerb(number,power);
        printf("%d",result);
        test_cases--;
    }
}

