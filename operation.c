
#include "operation.h"

#include <stdlib.h>

void operation_init(struct operation *self, int implementation)
{
    self->implementation = NULL;

    if (implementation == OPERATION_ADD)
    {
        self->implementation = &operation_add_implementation;
    }
    else if (implementation == OPERATION_SUBSTRACT)
    {
        self->implementation = &operation_substract_implementation;
    }
    else if (implementation == OPERATION_DIVIDE)
    {
        self->implementation = &operation_divide_implementation;
    }
    else if (implementation == OPERATION_MULTIPLY)
    {
        self->implementation = &operation_multiply_implementation;
    }
}

void operation_destroy(struct operation *self)
{
    self->implementation = NULL;
}

int operation_compute(struct operation *self, int a, int b)
{
    return self->implementation->function(a, b);
}
