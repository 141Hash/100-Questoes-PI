#include <stdio.h>
#include <string.h>

int retiraNeg (int v[], int N){
    int x;
    int r;
    int copy[N];
    for (x = 0; x < N; x++){
        copy[x] = v[x];
    }

    for (x=0, r = 0; x < N; x++){
        if (copy[x] >= 0) {
            v[r] = copy[x];
            r++;
        }
    }
    return r;
}
