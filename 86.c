int pruneAB (ABin *root, int depth) {
	if (*root == NULL){
		return 0;
	} 
	if (depth == 0){
		int res = 1 + pruneAB( &((*root)->esq), 0)  
		            + pruneAB( &((*root)->dir), 0); 
		free(*root);                                
		*root = NULL;                             
		return res;                                
	} 
	else {
		return ( pruneAB( &((*root)->esq), depth - 1 ) +
				 pruneAB( &((*root)->dir), depth - 1 ) );
	} 
}
