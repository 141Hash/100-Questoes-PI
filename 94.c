int addOrd (ABin *a, int x) {
    if (*a == NULL){
        ABin new = NULL;
        new = (ABin) malloc (sizeof ( struct nodo));
        new -> valor = x;
        new -> esq = NULL;
        new -> dir = NULL;
        *a = NULL;
        return 0;
    }
    
    ABin current = *a;
    ABin prev;
	while (current != NULL){

		if (current->valor == x){
			return 1;
		}
		
		prev = current; 
		if (x < current->valor){
			current = current->esq;
		} else {
			current = current->dir;
		} 
	}

	ABin new = (ABin) malloc(sizeof(ABin));
	new->valor = x;
	new->esq = NULL;
	new->dir = NULL;

	if (x < prev->valor){
		prev->esq = new;
	} else {
		prev->dir = new;
	} 
    return 0;
}
