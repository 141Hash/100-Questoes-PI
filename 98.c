void removeMaiorA (ABin *root) {
	if ((*root)->dir == NULL){
		ABin temp = *root;
		*root = (*root)->esq;
		free(temp);
	} else {
		removeMaiorA(&((*root)->dir));
	} 
}
