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

<<<<<<< HEAD
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
=======
int euler_menu (double *dt, double *position1, double *t)
{
  printf ("1. Establece medidas en el tiempo (Δt): \n");
  scanf("%d",dt);
  printf ("2. Establece distancia inicial (X0): \n");
  scanf("%d",position1);
  printf ("3. Establece el tiempo de medicion: \n");
  scanf("%d",t);
  return 0;
}

void euler_create_list (EulerStruct **first, EulerStruct **aux, double position3, double time) {
  EulerStruct *node;
  node=malloc (sizeof (EulerStruct));
  if (node==NULL){
    printf ("NO hay memoria.\n");
    exit (0);
  }
  node->time=time;
  node->position = position3;
  if (*first=NULL){
    *first = node;
  }
  else{
    (*aux)->sig=node;
  }
  *aux=node;
  node->sig=NULL;
}

double euler_formula (double *position1, double *position2, double *position3,double k, double m, double g, double dt) {
  *position3 = (((-1)*(*position1))*(1+((k + (dt*dt))/m))) + (2*(*position2)) + ((dt*dt)*g);
  *position1 = *position2;
  *position2 = *position3;
  return 0;
}

void euler_store_list (EulerStruct *first, FILE *fp){
  EulerStruct *aux;
  aux=first;
  while (aux !=NULL){
    fprintf(fp, "%ld,", aux->position);
    fprintf(fp, "%ld\n",aux->time);
    aux= first;
  }
  aux=first;
  while (aux !=NULL){
    free (aux);
    aux= first;
  }
>>>>>>> a7ee03df20501d3d6a9f1696e16d172d005b258f
}
