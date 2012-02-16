#include <stdio.h>

/* When changeing \n to \c, it is recognized as
an unknown escape sequence. This program is the same
as oneOne.c */

int main(int argc, char *argv[])
{
	printf("hello, ");
	printf("world");
	printf("\n");
	
	return 0;
}