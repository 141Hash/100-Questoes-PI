#include <stdio.h>

int elimRepOrd (int v[], int n){
    int x, i=0;
    for ( x = 0; x < n; x++){
        if (v[x] != v[i]){
            i++;
            v[i] = v[x];
        }
    }
    return i+1;
}
