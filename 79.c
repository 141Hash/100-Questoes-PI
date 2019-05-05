ABin cloneAB (ABin a) {
    ABin clone = NULL;
    if (a != NULL){
        clone = malloc (sizeof(struct nodo));
        clone -> valor = a -> valor;
        clone -> esq = cloneAB (a->esq);
        clone -> dir = cloneAB (a->dir);
    }
    return clone;
}
