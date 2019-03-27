#include <stdio.h>
int devolveVogal(char z){
    switch (z){
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

int contaVogais (char s[]){
    int x, count;
    count = 0;
    if (s[0] == '\0') return 0;
    for (x = 0; s[x] != '\0'; x++){
        if (devolveVogal(s[x]) == 1 ) count++;
    }
    return count;
}
