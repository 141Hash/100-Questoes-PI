#include <lista.h>

void freeL (LInt l){
 LInt p;
 while( l != NULL){
 	p = l;
 	l = l -> prox;
 	free(p);
 }
}
