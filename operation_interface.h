
#ifndef OPERATION_INTERFACE_H
#define OPERATION_INTERFACE_H

struct operation_interface
{
    int identifier;
    int (*function)(int a, int b);
};

#endif
