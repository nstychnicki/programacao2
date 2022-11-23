#include <stdio.h>
int main(){
    int notas[3], ex, i, j, media;

    for(i=0; i<3; i++){
        scanf("%d", &notas[i]);
    }
    
    scanf("%d", &ex);

    media = (notas[0]+ (notas[1]*2)+ (notas[2]*3)+ ex)/7;

    if(media>=9){
        printf("nota A");
    }
    else{
        if(media>= 7.5 && media<9){
        printf("nota B");
        }
        else{
            if(media>= 6.5 && media<7.5){
            printf("nota C");
            }
            else{
                if(media>= 4 && media<6){
                printf("nota D");
                }
                else{
                    if(media<4){
                    printf("nota E");
                    }
    }
    }
    }
    }   
return 0;
}