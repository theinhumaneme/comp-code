#include <stdio.h>
int solve(int A) {
    int count = 0;
    // printf("%d",A&1);
    while (A%2==0)
    {
        A=A/2;
        count++;
    }
    printf("%d\n",count);
}
int main()
{
    int number = 18;
    solve(number);
}

