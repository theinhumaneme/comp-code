#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// int main() {
//     int test_cases;
//     scanf("%d",&test_cases);
//     // double mama_mia = 1e9+7;
//     long long int mama_mia = 1e9+7;
//     while(test_cases >0)
//     {
//         int number;
//         long long int result=1;
//         // double result=1;
//         scanf("%d",&number);
//         while (number>0)
//         {
//             result=(result*number)%(mama_mia);
//             number = (number-1);
//         }
//         printf("%lld\n",result%mama_mia);
//         // printf("%lf\n",fmod(result, mama_mia));
//         test_cases--;
//     }
// }
int fact(int num){
    if (num ==0){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
}
int main(){
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
        int number;
        scanf("%d\n",&number);
    }
}
