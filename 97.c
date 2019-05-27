int maiorAB (ABin a) {
    
    if (a -> esq == NULL && a -> dir == NULL) return a -> valor;
    
    else {
        while (a -> dir != NULL) a = a -> dir;
    }
    return a -> valor;
}
