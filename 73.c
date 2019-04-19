LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}


LInt arrayToList (int v[], int N){
	if (N == 0) return NULL;
	LInt head = newLInt (v[0], NULL);
	LInt current = head;

	int i;
	for(i = 1; i < N; i++){
		current->prox = newLInt(v[i], NULL);
		current = current->prox;
	}
	return head;
}
