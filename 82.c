void preorder_aux (ABin a, LInt * l) {
    LInt aux;
    if (a != NULL) {

        preorder_aux(a->dir, l);
        preorder_aux(a->esq, l);

        aux = malloc (sizeof (LInt));
        aux -> valor = a -> valor;
        aux -> prox = *l;

        *l  = aux;
    }
}

void preorder(ABin a, LInt* l) {
	*l = NULL;

	preorder_aux (a, l);
}
