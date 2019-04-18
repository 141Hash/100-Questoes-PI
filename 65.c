void concatL (LInt *a, LInt b){
	LInt current = *a;
	if (*a == NULL){
		*a = b;
		return;
	}
	while (current -> prox != NULL){
		current = current -> prox;
	}
	current -> prox = b;
}
