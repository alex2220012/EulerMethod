//
//  Implementation.c
//
//
//  Created by Team 3.
//
/**
* Our sample program.
* @copyright 2020 by TDA
* @license as you wish
* @author Team 3.
* @version 2020-09-30
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
    /* Initialize modules: */
    float k,m,position1,position2,position3,dt,time,t;
    const double g = 9.81;
    conditions *aux, *first, *node;
    clock_t start,stop;
    first = NULL;
    FILE *fp;



    euler_menu (&k,&m,&position1,&position2,&dt,&t);






    for (float i = 0; i <= t;) {


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
}
