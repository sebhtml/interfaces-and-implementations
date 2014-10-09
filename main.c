
#include "operation.h"

#include <stdio.h>

int main(int argc, char **argv)
{
    struct operation add;
    /*struct operation substract;*/
    int a;
    int b;

    a = 10;
    b = 5;

    operation_init(&add, OPERATION_ADD);

    printf("OPERATION_ADD with %d and %d yields %d\n",
                    a, b, operation_compute(&add, a, b));

    return 0;
}
