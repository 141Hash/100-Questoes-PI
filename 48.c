#include <stdio.h>

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {
    int x, y;
} Posicao;

int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
    int x,r = 0;
    for(x=0; inicial.x != final.x || inicial.y != final.y; x++){
        if(inicial.y < final.y){
            mov[x] = Norte;
            inicial.y += 1;
            r++;

        }
        else if(inicial.y > final.y){
            mov[x] = Sul;
            inicial.y -= 1;
            r++;

        }
        else if(inicial.x < final.x){
            mov[x] = Este;
            inicial.x += 1;
            r++;

        }
        else if(inicial.x < final.x){
            mov[x] = Oeste;
            inicial.x -= 1;
            r++;

        }

    }
    if(r > N) r = -1;
    return r;


}
