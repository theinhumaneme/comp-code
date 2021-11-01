#include <stdio.h>
int main(){
    int value;
    scanf("%d",&value);
    for(int k=1;k<=value;k++){
        int add=(value-1);
        int base=k;
        for(int j=0;j<k;j++){
            printf("%d ",base);
            base=base+add;
            add--;
        }
        printf("\n");
    }
}