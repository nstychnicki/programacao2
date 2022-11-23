#include <stdio.h>
int main(){
    int numeros[6],i;

    for ( i = 0; i < 6; i++){
        scanf("%d", &numeros[i]);
    }
    
    for ( i = 0; i < 6; i++){
        printf("%d \n", numeros[i]);
    }    

return 0;        
}
