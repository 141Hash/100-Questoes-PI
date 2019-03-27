#include <stdio.h>
#include <string.h>

int pertence (int v[], int N,int j) { // 0 nao repete; 1 repete
    int i,r = 0;
    for (i = 0; i < j && i<N && r == 0;i++)
        if (v[i] == v[j]) r = 1;
    return r;
}

int elimRep (int  v[],int N) {
    int i,j = 0,acc = 0;
    for (i = 0;i<N;i++){
        if (pertence(v,N,i) == 0) {
            v[j] = v[i];
            j++;
        }
    }
    return j;
}
