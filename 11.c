#include <stdio.h>
#include <string.h>
void strrev1 (char s[]){
    int x, y, z;
    z = strlen(s) - 1;
    char m[300];
    for (x = 0; x <= z; x++){
        m[x] = s[x];
    }

    for (x = z, y = 0; x >= 0; x--, y++){
      s[y] = m[x];
    }
    s[y] = '\0';
}
