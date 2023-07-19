#include <stdio.h>
#include <stdlib.h>
#ifndef MY_HEADER
#define MY_HEADER
void print_name(char *name, void (*f)(char *));
#endif
