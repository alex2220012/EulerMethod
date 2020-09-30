#include <stdio.h>
#include <stdlib.h>

#include "Euler.h"

FILE * euler_file(char *name, char *mode){
  FILE *fp;
  fp = fopen (name, mode);
  return fp;
}

void euler_save(FILE * fp, conditions *first, conditions *aux, conditions *node){
  node=first;
  while (node != NULL){
    fprintf(fp, "%f,",node->position);
    fprintf(fp, "%f\n",node->time);
    first=first->sig;
    node=first;
  }
}
