#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int test;
    scanf("%d",&test);
    while(test--){
        int num;
        scanf("%d",&num);
        int number = num;
        int count = 1;
        while((number--)>1){
            if (num%number == 0){
                count++;
            }
            else{
                continue;
            }
        }
        printf("%d\n",count);
    }
}
