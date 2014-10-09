
#include "operation.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    struct operation object;
    int a;
    int b;

    a = 50;
    b = 5;

    operation_init(&object, OPERATION_ADD);
    printf("OPERATION_ADD with %d and %d yields %d\n",
                    a, b, operation_compute(&object, a, b));
    operation_destroy(&object);

    operation_init(&object, OPERATION_SUBSTRACT);
    printf("OPERATION_SUBSTRACT with %d and %d yields %d\n",
                    a, b, operation_compute(&object, a, b));
    operation_destroy(&object);

    operation_init(&object, OPERATION_MULTIPLY);
    printf("OPERATION_MULTIPLY with %d and %d yields %d\n",
                    a, b, operation_compute(&object, a, b));
    operation_destroy(&object);

    operation_init(&object, OPERATION_DIVIDE);
    printf("OPERATION_DIVIDE with %d and %d yields %d\n",
                    a, b, operation_compute(&object, a, b));
    operation_destroy(&object);

    return 0;
}
