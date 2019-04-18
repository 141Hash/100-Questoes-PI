LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

LInt cloneL (LInt l){
	if (l == NULL){
		return NULL;
	}
	LInt new = newLInt (l->valor, NULL);
	LInt current = l;
	LInt currentNew = new;

	while (current != NULL){
    current = current -> prox;

	currentNew -> prox = newLInt(current -> valor, NULL);
	currentNew = currentNew -> prox;
	}
	return new;
}
