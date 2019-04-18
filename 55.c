LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

void insertOrd (LInt *l, int x){
  
  LInt current = *l;

  if(current == NULL){
  	LInt new = newLInt (x, NULL);
  	*l = new;
  	return;
  }

  int i;
  LInt p;

  for( i = 0; x > current -> valor && current ->prox != NULL; i++){
  	p = current;
  	current = current->prox;
  }


if (x > current -> valor){
	LInt new = newLInt(x, NULL);
	current -> prox = new;
}
else{
	
	LInt new = newLInt(x, current);

	if( i == 0) *l = new;

	else {
		p -> prox = new;
	}
}
}
