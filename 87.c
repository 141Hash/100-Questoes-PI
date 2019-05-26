int iguaisAB (ABin a, ABin b) {
    int res = 1;
    if (a == NULL && b == NULL) return res;
    else if (a == NULL && b != NULL) res = 0;
    else if (a != NULL && b == NULL) res = 0;
    else{
        if(a -> valor == b -> valor){
            return (iguaisAB(a->esq, b -> esq) * iguaisAB(a->dir, b -> dir));
        }
        else res = 0;
    }
    return res;
}
