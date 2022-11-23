#include <stdio.h>

int main(){
    int reais[10], dnovo[10], i;

    for(i=0; i<10; i++){
        scanf("%d", &reais[i]);
        dnovo[i] = reais[i]*reais[i];
    }

    for(i=0; i<10; i++){
        printf("%d ", reais[i]);
    }
    printf("\n");
    
    for(i=0; i<10; i++){
        printf("%d ", dnovo[i]);
    }


return 0;
}