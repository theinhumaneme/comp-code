#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int setbits(int num)
{
    int count=0;
    if (num==0)
    {
        return 0;
    }
    else{
        while(num>0)
        {
            // printf("while");
            if (num%2==0)
            {
                num=num/2;
            }
            else{
                count++;
                num=num/2;
            }
        } 
    }
    return count;
}
int main() {
    int test_cases;
    scanf("%d",&test_cases);
    while (test_cases>0)
    {
        int a,b,number;
        scanf("%d %d",&a,&b);
        number = a^b;
        // printf("%d",number);
        int count = setbits(number);
        printf("%d\n",count);
        test_cases--;
    }

}
