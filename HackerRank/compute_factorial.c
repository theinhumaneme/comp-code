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
long long int fact( long long int num){
    if (num >=1){
        return num*fact(num-1);
    }
    else{
        return 1;
    }
}
int main(){
    int test;
    long long int number;
    scanf("%d",&test);
    while(test--){
        scanf("%lld",&number);
        long long int return_number = fact(number);
        printf("%lld\n",return_number%1000000007);
        
    }
    return 0;
}
