#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Euler.h"

int euler_menu (float *k, float *m, float *position1, float *position2, float *dt, float *t){
  printf ("Bienvenido.\n");
  printf("1.Ingresa la constante del Bongee (k): \n");
  scanf("%f",k);
  printf("2.Ingresa la masa de la persona (m): \n");
  scanf("%f",m);
  printf("3.Ingresa la posicion 0: \n");
  scanf("%f",position1);
  printf("4.Ingresa la posicion 1: \n");
  scanf("%f",position2);
  printf("5.Ingresa la diferencia de tiempo (dt): \n");
  scanf("%f",dt);
  printf("6.Ingresa el tiempo a medir (t): \n");
  scanf("%f",t);
  return 0;
}

float euler_form (float k, float m, const double g, float position1, float position2, float dt){
  float position;
  float p1 = ((-1)*position1)*(1+((k*(dt*dt))/m));
  float p2 = 2 * position2;
  float p3 = dt*dt*g;
  position=p1+p2+p3;
  return position;
}

int euler_list (float position3, conditions **first, conditions **aux, conditions *node, float time){
  node=malloc (sizeof (conditions));
  if (first==NULL){
    printf ("No se asigno el espacio en memoria.\n");
    exit (0);
  }
  node->position=position3;
  node->time = time*1e3;
    if (*first==NULL){
      *first=node;
    }
    else{
      (*aux)->sig=node;
    }
    *aux=node;
    node->sig=NULL;
    return 0;
}
int euler_free (conditions *node, conditions *first, conditions *aux){
  node=first;
  while (node != NULL){
    first=first->sig;
    free (node);
    node=first;
  }
  return 0;
}
