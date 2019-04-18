int listToArray (LInt l, int v[], int N){
	int i;
	for(i = 0; i < N && l != NULL ; i++){
		v[i] = l -> valor;
		l = l->prox;
	}
return i;
}
