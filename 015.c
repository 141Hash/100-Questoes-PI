int iguaisConsecutivos (char s[]){
    int x,j,z;
    j= 1;
    z = 1;
    if (s[0] == '\0') return 0;

    for (x = 0; s[x] != '\0'; x++){
        if (s[x] == s[x+1]) {
            z++;
        }
        else {
            if (z > j){
                j = z;
            }
            z = 1;
        }
    }
    return j;
}
