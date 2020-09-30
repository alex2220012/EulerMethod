//
//  Euler.h
//
//
//  Created by Team 3.
//

#ifndef Euler_h
#define Euler_h

#include <stdio.h>
#include <stdlib.h>

typedef struct euler {
  float position;
  float time;
  struct euler *sig;
}conditions;

#ifdef Euler_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

EXTERN int euler_menu (float *k, float *m, float *position1, float *position2, float *dt, float *t);

EXTERN float euler_form (float k, float m, const double g, float position1, float position2, float dt);

EXTERN int euler_list (float position3, conditions **first, conditions **aux, conditions *node, float time);

EXTERN int euler_free (conditions *node, conditions *first, conditions *aux);

#undef Euler_IMPORT
#undef EXTERN
#endif /* Euler_h */
