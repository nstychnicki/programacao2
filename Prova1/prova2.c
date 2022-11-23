#include <stdio.h>
int main(){
    int valores[10], i, j, aux;

    for(i=0; i<10; i++){
        scanf("%d", &valores[i]);
    }

    for(i=0; i<10; i++){
        for(j=i+1; j<10; j++){
            if(valores[i]> valores[j]){
            aux = valores[i];
            valores[i] = valores[j];
            valores[j] = aux;
            }
        }
    }

    for(i=0; i<10; i++){
        printf("%d ", valores[i]);
    }
    
    printf("\n");
    
    for(i=9; i>=0; i--){
        printf("%d ", valores[i]);
    }
    
return 0;
}