#include <stdio.h>

void Menor(){
    int menor, n[5], aux;
    for(int i=0; i<5; i++){
        scanf("%d", &n[i]);
        if(i==0) menor = n[0];
        if(menor>n[i]) menor = n[i];
    }
    printf(" menor: %d", menor);
}

int main(){
    Menor();

return 0;
}