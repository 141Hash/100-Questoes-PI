int quantosMaiores (ABin a, int x) {
    if (a == NULL) return 0;
    else {
        if(x < a -> valor){
            return 1 + quantosMaiores(a->esq, x) + quantosMaiores(a->dir, x);
        }
        
        else {
            return quantosMaiores(a->dir, x);
        }
    }
    
}
