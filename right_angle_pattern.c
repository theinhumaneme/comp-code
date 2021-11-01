#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d",&test_cases);
    for (int k=0;k<test_cases;k++)
    {
        int value;
        scanf("%d",&value);
        printf("Case #%d:\n",k+1);
        for (int j =1;j<=value;j++)
        {
            for (int i=0;i<value;i++)
            {
                if (i<value-j)
                {
                    printf(" ");
                }
                else
                {
                    printf("*");
                }
            }
            printf("\n");
        }
    }
}