int freeAB (ABin a) {
    if (a == NULL) return 0;
    else {
        ABin AEsq = a -> esq;
        ABin ADir = a -> dir;
        free(a);
        return (1 + freeAB(AEsq) + freeAB(ADir));
    }
}
