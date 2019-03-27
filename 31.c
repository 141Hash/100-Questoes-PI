#include <stdio.h>

int maisFreq (int v[], int N){
    int x, i, r, count, maior;
    maior = v[0];
    r = 0;
    for (x = 0; x < N; x++){
        count = 0;
        for(i=0; i < N; i++) if (v[i] == v[x]) count++;
        if (count > r){
            r = count;
            maior = v[x];
        }
    }
    return maior;
}
