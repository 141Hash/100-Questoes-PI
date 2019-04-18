#include <stdlib.h>
#include <lista.h>

int length (LInt l) {
	int i;
	for(i = 0; l != NULL; i++){
		l = l -> prox;
	}
	return i;
}
