//
//  Sequences.h
//
//
//  Created by Team 3.
//

#ifndef Euler_h
#define Euler_h

#include <stdio.h>
#include <stdlib.h>
<<<<<<< HEAD

typedef struct euler {
  float position;
  float time;
  struct euler *sig;
}conditions;
=======
>>>>>>> a7ee03df20501d3d6a9f1696e16d172d005b258f

#ifdef Euler_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif

<<<<<<< HEAD
EXTERN int euler_menu (float *k, float *m, float *position1, float *position2, float *dt, float *t);

EXTERN float euler_form (float k, float m, const double g, float position1, float position2, float dt);

EXTERN int euler_list (float position3, conditions **first, conditions **aux, conditions *node, float time);
=======
typedef struct Eulertype{
  double time;
  double position;
  struct Eulertype *sig;
} EulerStruct;

EXTERN int euler_menu();

EXTERN void euler_create_list (EulerStruct **first, EulerStruct **aux, double position3, double time);

EXTERN double euler_formula (double *position1, double *position2, double *position3, double k, double m, double g, double dt);

EXTERN void euler_store_list (EulerStruct *first, FILE *fp);
>>>>>>> a7ee03df20501d3d6a9f1696e16d172d005b258f

EXTERN int euler_free (conditions *node, conditions *first, conditions *aux);

#undef Euler_IMPORT
#undef EXTERN
#endif /* Euler_h */
