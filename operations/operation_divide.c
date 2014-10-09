
#include "operation_divide.h"

int operation_divide(int a, int b)
{
    return a / b;
}

struct operation_interface operation_divide_implementation =
{
    .identifier = OPERATION_DIVIDE,
    .function = operation_divide
};


