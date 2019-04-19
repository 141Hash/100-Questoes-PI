LInt Nforward (LInt l, int N){
	LInt current = l;
	int i;
	for(i = 0; i < N; i++){
		current = current-> prox;
	}
	return current;
}
