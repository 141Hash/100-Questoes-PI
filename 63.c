void init (LInt *l){
	LInt current = *l;

	if ((*l)->prox == NULL){
       free(*l);
       *l = NULL;
       return;
	}
    LInt prev;
    while (current -> prox != NULL){
        prev = current;
        current = current -> prox;
    }
    prev -> prox = NULL;
    free(current);
}
