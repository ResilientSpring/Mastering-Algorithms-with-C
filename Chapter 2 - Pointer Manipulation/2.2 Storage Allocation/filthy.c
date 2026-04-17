#include <stdio.h>

int f(int ** iptr)
{

	int a = 0;
	*iptr = &a;

	return 0;
}

int g(int ** iptr) {


	if ((*iptr = (int*)malloc(sizeof(int))) == NULL)
		return -1;

}