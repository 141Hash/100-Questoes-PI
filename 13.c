void mytruncW (char t[], int n) {
    int i,j,s;
    i=0;
    j=0;
    s=n;
    char copia[strlen(t)];
    strcpy(copia,t);
    while (copia[i]!=0) {
        while (copia[i] != ' ' && copia[i]!= '\0') {
            if (n > 0 && copia[i]!=' ') {
                t[j]=copia[i];
                n--;
                j++;
            }
            i++;
        }
        t[j] = copia[i];
        i++;
        j++;
        n=s;
    }
    t[j] = '\0';
}
