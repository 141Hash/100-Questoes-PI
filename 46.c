#include <stdio.h>

int cardinalMSet (int N, int v[N]){
    int i, count;
    count = v[0];
    for(i = 0; i < N; i++){
        count += v[i];
    }
    return count;
}
