 
int lookupAB (ABin a, int x) {
    if (a == NULL) return 0;
    
    else {
        if(x == a->valor) return res;
        
        else if ( x < a -> valor){
            lookupAB(a->esq, x);
        }
        
        else {
            lookupAB (a->dir, x);
        }
    }
    
}
