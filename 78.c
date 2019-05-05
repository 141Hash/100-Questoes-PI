ABin newABin (int r, ABin e, ABin d){
	ABin new = (ABin) malloc (sizeof (struct nodo));

	if (new!=NULL){
		new->valor = r;
		new->esq   = e;
		new->dir   = d;
	}
	return new;
}

int altura (ABin a){
    int alt;
    
    if (a == NULL) return 0;
    
    int altura_esq = altura (a->esq);
    int altura_dir = altura (a->dir);
    
    if(altura_esq > altura_dir) alt = altura_esq + 1;
    else alt = altura_dir + 1;
    
	return alt;
}
