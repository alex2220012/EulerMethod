//
//  Implementation.c
//
//
//  Created by Team 3.
//
/**
* Our sample program.
* @copyright 2008 by TDA
* @license as you wish
* @author Team 3.
* @version 2020-08-09
* @file
*/


/* Include standard headers: */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

/* Include modules header we directly invoke here: */
#include "Euler.h"
#include "Files.h"



int main(int argc, char **argv)
{
<<<<<<< HEAD
    /* Initialize modules: */
    float k,m,position1,position2,position3,dt,time,t;
    const double g = 9.81;
    conditions *aux, *first, *node;
    clock_t start,stop;
    first = NULL;
    FILE *fp;



    euler_menu (&k,&m,&position1,&position2,&dt,&t);






    for (float i = 0; i < t;) {


      start=clock ();
      position3 = euler_form (k,m,g,position1,position2,dt);
      stop = clock ();
      printf("position: %f\t",position3);
      time = ((double)(stop-start))/CLOCKS_PER_SEC;
      printf("time: %f\n",time*1e9);
      euler_list (position3,&first,&aux,node,time);
      position1=position2;
      position2=position3;
      i=i+dt;
    }

    fp=euler_file ("datos.csv","wt");

    euler_save (fp,first,aux,node);

    euler_free (node,first,aux);


    return 0;
=======
  int opcion;
  double time, position;
  clock_t start,stop;
  EulerStruct *aux;
  EulerStruct *first = NULL;
  double position1=0,position2=0,position3=0;
  double k= 500, m = 60, g = 9.81;
  double dt, t;
  FILE *fp;


  euler_menu();
  for (size_t i = 0; i < t; i++) {
    start=clock();
    euler_formula (&position1,&position2,&position3,k,m,g,dt);
    stop=clock();
    time = ((double)(stop-start))/CLOCKS_PER_SEC;
    euler_create_list (&first,&aux,position3,time);
  }
  fp=fopen("hola.csv","wt");
  euler_store_list (first,fp);
  fclose (fp);

  return 0;
>>>>>>> a7ee03df20501d3d6a9f1696e16d172d005b258f
}
