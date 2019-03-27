#include <stdio.h>
int unionSet (int N, int v1[N], int v2[N], int r[N]){
    int x, j= 0;
    for (x = 0; x < N; x++){
        if(v1[x] == 1 || v2[x] == 1){
            r[j] = 1;
            j++;
        }
        else if(v1[x] == 0 && v2[x] == 0){
            r[j] = 0;
            j++;
        }
    }
}
