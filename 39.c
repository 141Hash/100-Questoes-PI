#include <stdio.h>

int triSup (int N, float m [N][N]){
    int x, i, r = 1;
    for (x = 0; x < N; x++){
        for ( i = 0; i < N; i++){
            if(i < x && m[x][i] != 0) r = 0;
        }
    }
    return r;
}
