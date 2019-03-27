#include <stdio.h>

int main() {
    int x, maior;
    maior = 0;
    scanf("%d", &x);
    while (x != 0){
        if(x > maior) maior = x;
        scanf("%d", &x);
    }
    printf("O maior é %d", maior);

}
