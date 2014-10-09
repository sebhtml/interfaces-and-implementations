
#ifndef OPERATION_H
#define OPERATION_H

#include "operation_interface.h"

#include "operations/operation_add.h"
//#include "operations/operation_substract.h"

struct operation
{
    struct operation_interface *implementation;
};

void operation_init(struct operation *self, int implementation);
void operation_destroy(struct operation *self);
int operation_compute(struct operation *self, int a, int b);

#endif
