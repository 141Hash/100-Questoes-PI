#include <stdio.h>
int maxInArray (int *ascii, int n){
    int i = 0;
    int j = 0;
    int max = ascii[i];
    for (i = 0; i < n; i++){
        if (ascii[i] > max){
            max = ascii[i];
            j = i;
        }
    }
    return j;
}

char charMaisfreq (char s[]) {
    int ascii[127] = {0};
    int i;
    if (s[0] == '\0'){
        return 0;
    }
    for (i = 0; s[i] != '\0'; i++){
        ascii[s[i]] += 1;
    }
    return maxInArray (ascii, 127);
}
