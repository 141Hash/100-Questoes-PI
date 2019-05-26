int dumpAbin (ABin root, int v[], int n){
    if (root == NULL){
    	return 0;
    } 

    if (n == 0){
    	return 0;
    } else {
    	int pos = dumpAbin(root->esq, v, n - 1);                         
    	v[pos] = root->valor;                                             
    	return pos + 1 + dumpAbin(root->dir, v + pos + 1, n - (pos + 1)); 
    } 
}
