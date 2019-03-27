#include <stdio.h>

int main () {
    int x, maior1 = 0, maior2 = 0;

     scanf("%d", &x);

     while ( x != 0) {

     if (x > maior1 && x > maior2) {
         maior2 = maior1 ;
         maior1 = x ;
     }
     else if (x > maior2 && x < maior1) {
         maior2 = x;
     }
     scanf ("%d", &x);
}


    printf("O segundo maior elemento é %d\n", maior2);
    return 0;
}