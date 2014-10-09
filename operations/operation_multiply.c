
#include "operation_multiply.h"

int operation_multiply(int a, int b)
{
    return a * b;
}

struct operation_interface operation_multiply_implementation =
{
    .identifier = OPERATION_MULTIPLY,
    .function = operation_multiply
};


