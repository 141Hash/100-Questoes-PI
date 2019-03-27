char *strcpy2 (char *dest, char source[]){
    int x;
    for (x = 0; source[x] != '\0'; x++){
      dest[x] = source[x];
    }
    while (dest[x] != '\0') {
        dest[x] = '\0';
        x++;
    }

    return dest;
}
