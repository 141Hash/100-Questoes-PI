int removeAll (LInt *l, int x){
	int count = 0;

	while(*l != NULL){
		if((*l)->valor == x){
			(*l) = (*l)->prox;
			count++;
		}
		else break;
	}

	if(*l == NULL) return count;

	LInt current = *l;
	LInt prev;

	while (current != NULL){
		if(current->valor == x){
			current = current->prox;
			prev->prox = current;
			count++;

		}
		else{
			prev = current;
			current = current->prox;
		}
	}
	return count;
}
