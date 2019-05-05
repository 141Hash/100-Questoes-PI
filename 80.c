void mirror (ABin *a) {
    
    if(*a != NULL){
        ABin novo = (*a) -> esq;
        (*a)-> esq = (*a)->dir;
        (*a)->dir = novo;
        
        mirror(&((*a)->esq));
        mirror(&((*a)->dir));
    }
    
}
