#include <stdio.h>
#include <string.h>
int main(){
    char nome[3][256], i, j, aux[256];

    for(i=0; i<3; i++){
        scanf("%s", nome[i]);
    }

    for(i=0; i<3; i++){
        for(j=i+1; j<3; j++){
            if (strcmp(nome[i], nome[j])>0){
                strcpy(aux, nome[i]);
                strcpy(nome[i], nome[j]);
                strcpy(nome[j], aux);
            }
        }
    }  

    for(i=0; i<3; i++){
        printf("%s \n", nome[i]);
    } 

return 0;     
}