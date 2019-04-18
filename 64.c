LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void appendL (LInt *l, int x){
	LInt current = *l;
	LInt new = newLInt (x, NULL);
	
	if(*l == NULL){
		*l = new;
		return;
	}
    while (current -> prox != NULL){
    	current = current -> prox;
    }
    current -> prox = new;
}
