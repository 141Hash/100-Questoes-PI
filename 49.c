#include <stdio.h>

typedef struct posicao {
    int x, y;
} Posicao;

int maisCentral (Posicao pos[], int N) {
    int i,tmp,r = (pos[0].x)*(pos[0].x) +(pos[0].y)*(pos[0].y),p = 0;
    for (i = 0;i<N;i++) {
        tmp = (pos[i].x)*(pos[i].x)+(pos[i].y)*(pos[i].y);
        if (tmp<r) {
            r = tmp;
            p = i;
        }
    }
    return p;
}
