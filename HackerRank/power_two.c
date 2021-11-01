#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int setbits(int num)
{
    int count=0;

    while(num>0)
    {
        count++;
        num=num&(num-1);
    }
    return count;
}
int main() {

    int test_cases;

    scanf("%d",&test_cases);
    while(test_cases--)
    {
        long long int number;
        scanf("%lld",&number);
        int count=0;
        while(number>0)
        {
            count++;
            number=number&(number-1);
        }
        if (count==1)
        {
            printf("True\n");
        }
        else{
            printf("False\n");
        }
    }
    return 0;
}
