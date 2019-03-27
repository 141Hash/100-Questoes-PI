#include <stdio.h>
int menosFreq (int v[], int N){
    int x, i, r, menor, count;
    menor = v[0];
    r = N;
    for (x = 0; x < N; x++){
        count = 0;
        for ( i = 0; i < N; i++) if (v[i] == v[x]) count++;
            if (count < r){
                r = count;
                menor = v[x];
            }

    }
    return menor;
}
