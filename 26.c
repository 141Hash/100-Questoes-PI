#include <stdio.h>

void insere  (int v[], int N, int x) {
	int j,i;
	for (i = 0;i<N && x>v[i];i++); 
	for (j = N ; j != i ;j--) 
		v[j] = v[j-1]; 
	v[i] = x;
} 
