int removeOneOrd (LInt *l, int x){
	LInt current = *l;
	if (current == NULL){
		return 1;
	}
	else if(current->prox == NULL && current->valor != x){
		return 1;
	}
	else if (current -> prox == NULL && current->valor == x){
		free(*l);
		*l = NULL;
		return 0;
	}
	
	LInt prev;

	while (current != NULL){
		if(current->valor == x){
			prev->prox = current -> prox;
			free(current);
			return 0;

		}
		prev = current;
		current = current -> prox;
	}
	return 1;
}
