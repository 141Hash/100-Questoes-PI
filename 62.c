int removeMaiorL (LInt *l){
	LInt tmp;
	LInt prev;
	LInt current = *l;
	int max = current->valor;

	while (current != NULL){
		if(current->valor > max) max = current->valor;
		current = current->prox;
	}

	if((*l)-> valor == max){
		tmp = *l;
		*l = (*l) -> prox;
		free(tmp);
		return max;
	}

	current = *l;

	while(current-> valor != max){
		prev = current;
		current = current->prox;
	}
	tmp = current;
	prev->prox = current->prox;
	free(tmp);
	return max;
}
