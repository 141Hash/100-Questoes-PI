#include <stdio.h>

void somasAc (int v[], int Ac [], int N){
    int x,i;
    for (x = 0; x < N; x++){
       Ac[x] = 0;
       for (i = 0; i <= x; i++){
           Ac[x] += v[i];
       }
    }

}
