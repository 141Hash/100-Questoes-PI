#include <lista.h>
#include <stdio.h>

void imprimeL (LInt l){
 while(l != NULL){
 	printf("%d\n", l->valor);
 	l = l -> prox;
 }
}
