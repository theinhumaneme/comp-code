#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int test_cases;
    scanf("%d",&test_cases);
    while(test_cases--)
    {
        long long int number;
        long long int fact=1;
        scanf("%lld",&number);
        while(number>0)
        {
            fact=fact*number;
            number--;
        }
        int count=0;
        while(fact%10==0)
        {
            count++;
            fact=fact/10;
        }
        printf("%d\n",count);
    }
}
