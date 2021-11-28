#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    while (test--)
    {
        long long int temp1, temp2, x, y, t, GCD, LCM;
        scanf("%lld %lld", &x, &y);
        temp1 = x;
        temp2 = y;
        while (temp2 != 0)
        {
            t = temp2;
            temp2 = temp1 % temp2;
            temp1 = t;
        }
        GCD = temp1;
        LCM = (x * y) / GCD;
        printf("%lld %lld",LCM,GCD);
    }

    return 0;
}