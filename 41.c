#include <stdio.h>

void addTo (int N, int M, int a [N][M], int b[N][M]){
    int x,i;
    for (x = 0; x < N; x++){
for (i = 0; i < M; i++){
    a[x][i] += b[x][i];
}
    }
}
