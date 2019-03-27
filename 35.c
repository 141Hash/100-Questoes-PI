#include <stdio.h>

int comunsOrd (int a[],int na,int b[],int nb) {
    int i,j = 0,acc = 0;
    for (i = 0;i<na;) {
        if (a[i]<b[j]) i++;
        if (a[i]>b[j]) j++;
        if (a[i] == b[j]) {
            i++;
            j++;
            acc++;
        }
    }
    return acc;
}
