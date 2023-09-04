#include <stdio.h>
/**
 * premain_function - a function that is executed before
 * the main function is
 */
void __attribute__((constructor)) premain_function()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
