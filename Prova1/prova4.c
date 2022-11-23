#include <stdio.h>
int main(){
    int matriz[3][3], i, j, aux, mn, ml;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
        scanf("%d", &matriz[i][j]);
        if(i==0 && j==0) mn = matriz[i][j];
        if(matriz[i][j]< mn){
            mn = matriz[i][j];
            ml = i+1;
        }
    }
    }

    printf("menor linha: %d", ml);

return 0;
}