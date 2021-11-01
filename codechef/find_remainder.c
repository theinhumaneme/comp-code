#include <stdio.h>
int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    while (test_cases>0)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%d\n",(a%b));
        test_cases--;
    }
}