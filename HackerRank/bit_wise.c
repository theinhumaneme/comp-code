#include <stdio.h>

int main()
{
    int a = 15;
    printf("%d\n",a&a);
    printf("%d\n",a|a);
    printf("%d\n",a^a);
    printf("%d\n",a&1);
    printf("%d\n",a|1);
    printf("%d\n",a^1);
    printf("%d\n",a&0);
    printf("%d\n",a|0);
    printf("%d\n",a^0);
    return 0;
}