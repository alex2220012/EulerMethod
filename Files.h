//
//  files.h
//
//
//  Created by Team 3.
//

#ifndef Files_h
#define Files_h

#include <stdio.h>
#include <stdlib.h>

#include "Euler.h"

#ifdef Files_IMPORT
    #define EXTERN
#else
    #define EXTERN extern
#endif


/* Files.h -- Function prototypes */

/**
 * Instanciates a new file pointer identified via its name and mode.
 * @param
 *  name (char *):
 *      Name of the file
 *  mode (char *):
 *      Mode of file to be opened {r, rb, a, ab, w, wb}
 *
 * @return FILE * opened_file.
*/
EXTERN FILE * euler_file(char *name, char *mode);



/**
 * Writes a bidimensional buffer array into a file.
 * @param
 *  file (FILE *):
 *      Storage file
 *  columns (size_t ):
 *      length of the buffer array
 *  buff [ ][columns] (long double):
 *      RAM matrix
 *  rows (size_t):
 *      width of the storage buffer
 *
 * @return void.
*/

EXTERN void euler_save(FILE * file, conditions *first, conditions *aux, conditions *node);

#undef files_IMPORT
#undef EXTERN



#endif /* files_h */
