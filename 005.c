#include <stdio.h>
#include <string.h>

int trailingZ (int n) {
    int numberOfZeros = 0;
    if (n % 2 == 0) {
        while (n / 2 != 0) {
           if (n % 2 == 0) {
            n = n / 2;
            numberOfZeros ++;
           }
           else {
            break;
           }
        };
    }
    else numberOfZeros = 0;
    return numberOfZeros;
}
