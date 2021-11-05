#include <stdio.h>
void JengaBengaTowerHanoi(int N,char A,char C,char B){
    if(N==0) return;
    JengaBengaTowerHanoi(N-1,A,B,C);
    printf("Move %d from %c to %c\n",N,A,C);
    JengaBengaTowerHanoi(N-1,B,C,A);
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test_cases;
    scanf("%d",&test_cases);
    while(test_cases--){
        int N;
        scanf("%d",&N);
        char A='A',B='B',C='C';
        printf("%d\n",(1<<N)-1);
        JengaBengaTowerHanoi(N,A,C,B);
    }
    return 0;
}