
#include "operation_add.h"

int operation_add(int a, int b)
{
    return a + b;
}

struct operation_interface operation_add_implementation =
{
    .identifier = OPERATION_ADD,
    .function = operation_add
};


