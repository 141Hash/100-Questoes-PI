LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

LInt cloneRev (LInt l) {
 
 LInt current = l;

if (l == NULL){
	return NULL;
}
 
 LInt new = NULL;

 while (current != NULL){
 	new = newLInt(current-> valor, new);
 	current = current->prox;
 }
 return new;
}
