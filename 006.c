int qDig (int n) {
    int i;
    i=0;
    while (n != 0){
        n /= 10;
        i++;
    }
    return i;
}
