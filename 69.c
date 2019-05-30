void freeL (LInt l){
    LInt tmp;
    while(l != NULL){
        tmp = l;
        l = l->prox;
        free(tmp);
    }
}

int take (int n, LInt *l){
    
    LInt current = *l;
    
    int i;
    for(i = 0; i < (n-1) && current != NULL; i++){
        current = current->prox;
    }
    
    if(current == NULL) return i;
    
    LInt frL = current -> prox;
    current -> prox = NULL;
    freeL(frL);
    
    return ++i;
