#include <stdio.h>
#include <string.h>

void merge (int r [], int a[], int b[], int na, int nb) {
    int i = 0,j = 0,p = 0;
    while (p != na+nb) {
        if (a[i]<=b[j] && i<na || j == nb) {
            r[p] = a[i];
            i++;
            p++;
        }
        else if (a[i]>b[j] && j < nb || i == na) {
            r[p] = b[j];
            j++;
            p++;
        }
  
