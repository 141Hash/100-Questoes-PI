ABin cloneMirror (ABin a) {
   ABin new = NULL;
   if (a != NULL){
       new = (ABin) malloc(sizeof(struct nodo));
       new->valor = a -> valor;
       new -> esq = cloneMirror (a -> dir);
       new -> dir = cloneMirror (a -> esq);
   }
   return new;
}
