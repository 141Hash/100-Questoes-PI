int minValue(ABin root){
	if (root->esq == NULL){
		return root->valor;
	} else {
		return minValue(root->esq);
	} 
}

int maxValue(ABin root){
	if (root->dir == NULL){
		return root->valor;
	} else {
		return maxValue(root->dir);
	} 
}

int deProcura (ABin root) {

	if (root == NULL){
		return 1;  
	}
	
	if (root->esq != NULL && maxValue(root->esq) > root->valor){
		return 0;  
	} 
	
	else if (root->dir != NULL && minValue(root->dir) < root->valor){
		return 0;  
	} 
	
	else if (!deProcura(root->esq) || !deProcura(root->dir)){
		return 0;  
	}

	return 1;
}
