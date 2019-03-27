#include <stdio.h>
#include <string.h>

int strcmp1 (char s1[], char s2[]){
    int x, z;
    for (x = 0; s1[x] != '\0'; x++){

        if (s1[x] != '\0' && s2[x] == '\0'){
            z = 1;
            break;
        }
        if (s1[x] > s2[x]){
            z = 1;
            break;
        }
        if (s1[x] < s2[x]){
            z = -1;
            break;
        }

    }

    if (s1[x] == '\0' && s2[x] == '\0'){
        z = 0;

    }

    if (s1[x] == '\0' && s2[x] != '\0'){
        z = -1;

    }

    return z;
}
