void nivel (ABin root, int n, LInt *tail) {
	/* Se o nodo não existir para-se a função */
    if (root == NULL){
    	return;
    }

    /* Quando o nodo é encontrado é inserido o novo nodo no INICIO e é atualizado o apontador para
       a nova cabeça da lista */
    if (n == 1){
	    LInt head = (LInt) malloc(sizeof(struct lligada));
	    head->valor = root->valor;
	    head->prox = *tail;
	    *tail = head;
    } 
    /* Chama-se a função recursivamente aos ramos, sendo prioritarizado o ramo direito pois a função
       insere os novos nodos no inicio da lista */
    else {
    	nivel(root->dir, n-1, tail);
    	nivel(root->esq, n-1, tail);
    } 
}

LInt nivelL (ABin root, int n) {
    LInt head = NULL;
    nivel(root, n, &head);
    return head;
}
