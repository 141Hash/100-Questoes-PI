LInt rotateL (LInt l){
	if (l == NULL || l->prox == NULL) return l;

	LInt current = l;
	LInt novaLista = l-> prox;
	LInt first = l;

	while (current -> prox != NULL){
		current = current -> prox;
	}

	current-> prox = first;
	first->prox = NULL;
	return novaLista;
}
