LInt mynewLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}


void appendL (LInt *head, int x){
	LInt current = *head;
	LInt new = mynewLInt(x, NULL);
	if (*head == NULL){
		*head = new;
		return;
	}
	while (current->prox != NULL){
		current = current->prox;
	} 
	current->prox = new;
}


void posorder2 (ABin root, LInt *head) {
	if (root != NULL){ 
		posorder2 (root->esq, head); 
		posorder2 (root->dir, head);  
		appendL (head, root->valor); 
	}
}

void posorder (ABin root, LInt *head){
	*head = NULL; 
	posorder2(root, head);
}
