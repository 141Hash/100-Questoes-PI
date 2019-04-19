LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}


LInt somasAcL (LInt l){
	if ( l == NULL) return NULL;

	LInt current = l;
	int soma = current->valor;
	LInt novaLista = newLInt(soma, NULL);
	LInt currentSoma = novaLista;

	while (current != NULL){
		current = current->prox;
		if(current != NULL){
			soma += current->valor;
			currentSoma -> prox = newLInt(soma, NULL);
			currentSoma = currentSoma -> prox;
		}
	}
return novaLista;
}
