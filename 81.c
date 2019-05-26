void inorder (ABin a, LInt * l) {
    LInt aux;
    if (a != NULL) {
        inorder(a->dir, l);
        aux = malloc (sizeof (LInt));
        aux -> valor = a -> valor;
        aux -> prox = *l;
        inorder(a->esq, &aux);
        *l  = aux;
    }
}
