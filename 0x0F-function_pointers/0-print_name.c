#include "function_pointers.h"

/**
 *print_name - This is the function
 *@name: this is a variable
 *@f: this is a variable
 *Return: returns 0
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
