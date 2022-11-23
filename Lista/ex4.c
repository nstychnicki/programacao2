#include <stdio.h>
int main(){
    int num[10], i, j, oi;

    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(num[i]>num[j]){
                oi = num[i];
                num[i] = num[j];
                num[j] = oi;
            }
        }
    }
    printf("menor valor %d \n", num[0]);
    printf("maior valor %d ", num[9]);

return 0;
}