ABin somasAcA (ABin root) {
    if (root == NULL){
    	return NULL;
    }

    ABin newEsq = somasAcA(root->esq); 
    ABin newDir = somasAcA(root->dir);

  ABin newRoot = (ABin) malloc(sizeof(ABin));
	newRoot->esq = newEsq;
	newRoot->dir = newDir;

	int somaEsq;
	int somaDir;

	if (newEsq != NULL){
	    somaEsq = newEsq->valor;
	} 

	else {
		somaEsq = 0;
	} 

	if (newDir != NULL){
	    somaDir = newDir->valor;
	} else {
		somaDir = 0;
	} 

	newRoot->valor = somaEsq + somaDir + root->valor;
	return newRoot;
}
