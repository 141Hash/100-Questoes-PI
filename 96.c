int depthOrd2 (ABin root, int x, int depth){
	
	if (root == NULL){
		return -1;
	}
	if (x < root->valor){
		return depthOrd2(root->esq, x, depth + 1);
	} else if (x > root->valor){
		return depthOrd2(root->dir, x, depth + 1);
	} else {
		return depth; 
	} 
}

int depthOrd (ABin root, int x) {
	
    return depthOrd2(root, x, 1);
}
