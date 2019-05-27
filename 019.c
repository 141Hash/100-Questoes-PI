#include <stdio.h>
#include <string.h>

int sufPref (char s1[], char s2[]) {
    int i1,i2,r;
    i1 = 0;
    i2 = r = 0;
    while (s1[i1]!='\0'&& s2[i2]!='\0'){
        if (s1[i1] != s2[i2]){
        i1++;
        }
        else if (s1[i1] == s2[i2]){
            while (s1[i1] == s2[i2] && s1[i1]!='\0'){
                    i1++;
                    i2++;
                    r++;
            }
            if(s1[i1++]!='\0') r = 0; i2 = 0;
        }
    }

    return r;
}
