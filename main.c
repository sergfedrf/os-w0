#include <stdio.h>

int main (int argc, char *argv[])
{
    printf("Main worked\n");
    int i;
    for (i = 1; i < argc; i++)
	printf("argv[%d] = %s\n", i, argv[i]);
}

