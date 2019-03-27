#include <stdio.h>
#include <string.h>

int isVowel (char v){
    switch (v){
        case 'a':
            return 1;
            break;
        case 'e':
            return 1;
            break;
        case 'i':
            return 1;
            break;
        case 'o':
            return 1;
            break;
        case 'u':
            return 1;
            break;
        case 'A':
            return 1;
            break;
        case 'E':
            return 1;
            break;
        case 'I':
            return 1;
            break;
        case 'O':
            return 1;
            break;
        case 'U':
            return 1;
            break;
        default:
            return 0;
            break;
    }
}

void strnoV (char s[]){
    int i, j;
    char copy[strlen(s)];
    strcpy(copy, s);
    for (i = 0, j = 0; copy[i] != '\0'; i++){
        if (!(isVowel(copy[i]))){
            s[j] = copy[i];
            j++;
        }
    }
    s[j] = '\0';
}
