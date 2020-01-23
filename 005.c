#include <stdio.h>
#include <string.h>

int trailingZ (int n) {
    int numberOfZeros = 0;
    while (n % 2 == 0){
        n /= 2;
        numberOfZeros++;
        
    }
    return numberOfZeros;
}
