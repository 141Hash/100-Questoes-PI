#include <stdio.h>
#include <string.h>


int remRep (char texto []) {
    int i,j;
    j = 0;
    for (i = 0; texto[i]!='\0';i++){
        if (texto[i] != texto [i+1]){
            texto[j] = texto[i];
            j++;
        }
    }
    texto[j] = '\0';
    return j;
}
