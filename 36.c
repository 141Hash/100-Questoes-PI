#include <stdio.h>

int comuns (int a[], int na, int b[], int nb){
    int x, i, count;
    count = 0;
    for (x = 0; x < na; x++){
        for(i = 0; i< nb; i++){
            if(a[x] == b[i]){
                count++;
                break;
            }
        }
    }
    return count;
}
