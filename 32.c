#include <stdio.h>

int maxCresc (int v[], int N){
    int x, i, count, maior, p;
    maior = 0;
    for ( x = 0; x < N; x++){
        count = 1;
        p = x+1;
        for (i = x; v[i] <= v[p]; i++){
            p++;
            count++;
        }
        if (count > maior){
            maior = count;
        }
    }
    return maior;
}
