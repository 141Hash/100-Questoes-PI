#include <stdio.h>

int charContido (int n, char b[]){
    int i;
    for (i = 0; b[i] != '\0'; i++){
        if (b[i] == n){
            return 1;
        }
    }
    return 0;
}

int contida (char a[], char b[]) {
    int i;
    for (i = 0; a[i] != '\0'; i++){
        if (!(charContido(a[i],b))){
            return 0;
        }
    }
    return 1;
}
