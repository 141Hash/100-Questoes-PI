#include <string.h>
#include <stdio.h>

int contaPal (char s[]) {
    int i,r;
    r = 1;
    i = 0;
    if (s[0] == ' ' || s[0] == '\0'){
        while (s[i] == ' '){
        i++;
        }
        if (s[i] == '\0'){
            r = 0;
        }
    }
    for (i;s[i]!='\0';i++){
        if((s[i] == ' ' || s[i] == '\n' || s[i] == '.' || s[i] == ',') && (s[i+1] != ' ' && s[i+1] != '\n' && s[i+1] != '\0')){
            r++;}
    }
    return r;
}
