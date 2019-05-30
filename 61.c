int length (LInt l){
    int i;
    while ( l != NULL){
        l = l -> prox;
        i++;
    }
    return i;
}


void removeInt (LInt l, int x){
    LInt prev = l;
    l = l -> prox;
    while(l != NULL){
        if (l -> valor == x){
            prev -> prox = l -> prox;
            free(l);
            l = prev -> prox;
        }
        
        else{
            prev = prev -> prox;
            l = l -> prox;
        }
        
    }
    
}

int removeDups (LInt *l){
    
    int start = length (*l);
    
    if(start == 0) return 0;
    
    LInt current = *l;
    
    while (current != NULL){
        removeInt(current, current -> valor);
        current = current->prox;
    }
    
    int end = length(*l);
    
    return (end - start);
}
