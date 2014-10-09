
#include "operation_substract.h"

int operation_substract(int a, int b)
{
    return a - b;
}

struct operation_interface operation_substract_implementation =
{
    .identifier = OPERATION_SUBSTRACT,
    .function = operation_substract
};


