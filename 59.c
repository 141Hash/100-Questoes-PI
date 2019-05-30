int length (LInt head){
    int i;
    for (i = 0; head != NULL; i++){
    	head = head->prox;
    }
    return i;
}

LInt parteAmeio (LInt *l){
    LInt start = *l;
    LInt current = *l;
    
    int len = length (current);
    
    if(len == 1) return NULL;
    
    
    int meio = len/2;
    
    int i;
    
    for(i = 0; i + 1 < meio; i++){
        current = current -> prox;
    }
    
    *l = current -> prox;
    current -> prox = NULL;
    return start;
}
