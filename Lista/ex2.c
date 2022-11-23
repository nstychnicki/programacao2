#include <stdio.h>
int main(){
    int A[6], num, i;

    A[0]=1; A[1]=0; A[2]=5; A[3]=-2; A[4]=-5; A[5]=7;

    num = A[0]+A[1]+A[2]+A[3]+A[4]+A[5];
    printf("%d \n", num);

    for(i=0; i<6; i++){
        printf("%d \n", A[i]);
    }

return 0;
}