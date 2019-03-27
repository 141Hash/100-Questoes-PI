#include <stdio.h>
#include <ctype.h>

int difConsecutivos (char s[]){
    int max = 1;
    int buff = 1;
    int x;

    if(s[0] == '\0') return 0;

    for (x = 0; s[x] != '\0'; x++) {

        if (s[x] != s[x + 1]) {
            if (isalpha(s[x + 1])) {
                buff++;
            }
        } else {
            if (buff > max) {
                max = buff;
            }
            buff = 1;
        }
    }
    return max;
}
