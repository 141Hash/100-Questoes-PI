int maximo (LInt l){
	int max = 0;
	while (l != NULL){
		if(l-> valor > max) max = l-> valor;
		l = l->prox;
	}
	return max;
}
