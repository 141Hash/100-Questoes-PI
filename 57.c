LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void merge (LInt *r, LInt a, LInt b){
   *r = newLInt (141, NULL);
   LInt current = *r;
   
   while (a != NULL || b != NULL){
   
   if(a == NULL){
   	current -> prox = b;
   	break;
   }
   
   else if(b == NULL){
   	current -> prox = a;
   	break;
   }

   else{
   	if (a -> valor < b -> valor){
   		current-> prox = a;
   		a = a-> prox;
   		current = current-> prox;

   	 }

   	 else{
   	 	current-> prox = b;
   	 	b = b -> prox;
   	 	current = current -> prox;
   	 }
   }



 }

 current = *r;
 (*r) = (*r) -> prox;
 free(current);  
}
