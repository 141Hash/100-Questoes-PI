#include <stdio.h>

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;
typedef struct posicao {
    int x, y;
}
Posicao;

Posicao posFinal (Posicao inicial, Movimento mov[], int N){
    int i;
    for(i=0; i < N; i++){
        switch (mov[i]){
            case Norte :
                inicial.y += 1;
                break;
            case Sul:
                inicial.y += -1
                break;
            case Este:
                inicial.x += 1;
                break;
            case Oeste:
                inicial.x += -1;
                break;

        }
    }
    return inicial;
}
