#include <stdio.h>

typedef struct posicao {
    int x, y;
} Posicao;

int vizinhos (Posicao p, Posicao pos[], int N){
    int i, count;
    count = 0;
    for (i = 0; i < N; i++){
        if (p.x == pos[i].x && p.y == pos[i].y+1) count++;
        if (p.x == pos[i].x && p.y == pos[i].y-1) count++;
        if (p.y == pos[i].y && p.x == pos[i].x+1) count++;
        if (p.y == pos[i].y && p.x == pos[i].x-1) count++;
    }
    return count;
}
