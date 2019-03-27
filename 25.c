#include <stdio.h>
#include <string.h>

int limpaEspacos (char texto[]) {
    char copy[strlen(texto)];
    int i, j;
    strcpy(copy, texto);
    for (i = 0, j = 0; copy[i] != '\0'; i++){
        if (copy[i] == copy [i+1] && copy[i] == ' '){
            texto[j] = copy[i];
        } else {
            texto[j] = copy[i];
            j++;
        }
    }
    texto[j] = '\0';
    return strlen(texto);
}
