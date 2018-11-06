#ifndef MATRIX_H
#define MATRIX_H

#include <stdio.h>
#include "defs.h"
#include "dict.h"
#include "row.h"

typedef struct Matrix {
    char* name;
    unsigned nrows;
    unsigned ncols;
    Row* rows;
} Matrix;

Matrix* matrix_create(char* identifier);
void matrix_destroy(void* m);

Matrix* matrix_parse(char* identifier, char* line);
Matrix* matrix_evaluate(Dict* d, char* identifier, char* line);
void matrix_print(Matrix* m);

Matrix* matrix_copy(Matrix* m, char* identifier);

#endif
