#include <stdio.h>
void transposta (int N,float m[N][N]){
int i, j;
float p;
for(i = 0; i < N; i++)
  for(j = 0; j < i ; j++){
    p = m[i][j];
    m[i][j] = m[j][i];
    m[j][i] = p;
}
}
