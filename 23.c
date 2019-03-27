int palindroma (char s[]){
    int x;
    int i = strlen (s)-1;
    for (x = 0; s[x] != '\0'; x++, i--){
        if (s[x] != s[i]) return 0;
    }
    return 1;
}
