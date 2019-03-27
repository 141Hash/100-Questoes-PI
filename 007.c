char *strcat141 (char s1[], char s2[]){
    int i, u;
    i = 0;
    u = 0;
    while (s1[i] != '\0') {
      i++;
    }
    while (s2[u] != '\0') {
        s1[i] = s2[u];
        i++;
        u++;
    }
    s1[i] = '\0';
    return s1;

}
