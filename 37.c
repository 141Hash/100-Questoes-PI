#include <stdio.h>
int minInd (int v[], int n){
    int x, menor = v[0], r;
    for (x = 0, r = 0; x < n; x++){
        if (v[x] < menor){
            menor = v[x];
            r = x;
        }

        }

    return r;
}
