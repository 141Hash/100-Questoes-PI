
void freeL (LInt head){
	LInt tmp;
	while (head != NULL){
		tmp = head;
		head = head->prox;
		free(tmp);
	} 
}

int length (LInt head){
    int i;
    for (i = 0; head != NULL; i++){
    	head = head->prox;
    }
    return i;
}

int drop (int n, LInt *l){
	LInt current = *l;
	int len = length(current);

	if(n >= len){
		freeL (current);
		*l = NULL;
		return len;
	}

	int i;
	for(i = 0; i < (n-1); i++){
		current = current->prox;
	}
	
	LInt output = current -> prox;
	current->prox = NULL;
	freeL(*l);
	*l = output;
	return n;
}
