LInt reverseL (LInt l){
	LInt prev = NULL;
	LInt p;
	while ( l != NULL){
		p = l->prox;
		l->prox = prev;
		prev = l;
		l = p;
	}
	return prev;
}
