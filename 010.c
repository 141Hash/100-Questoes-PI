#include <stdio.h>
#include <string.h>

char * mystrstr (char * s1,char * s2) {
    int i = 0;
    int j=0;
    int pos = 0;
    if (s2[0] == '\0') return s1;
    if (s1[i] == s2[i]) {
            i++;
            while (s1[i] == s2[i] && s2[i] != '\0') {
                i++;
            }
            if (s2[i] == '\0') {
                return s1;
            }
            else return NULL;
        }
        else {
            while (s1[i] != s2[0] && s1[i] != '\0') i++;
            if (s1[i] == s2[j]) {pos = i;i++;j++;}
            while (s1[i] == s2[j] && s2[j] != '\0') {i++;j++;}
            if (s2[j] == '\0') return s1+pos;
            else return NULL;
        }
}
