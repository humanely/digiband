#include <stdlib.h>
#include <malloc.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <math.h>
#include <stdarg.h>
#include "stoi.c"

int main(int argc, char **argv) {
	char *buffer;

	buffer = (char *)malloc(sizeof(char) * 16);
	for (int i = 0; i < 16; i++)
		buffer[i] = 128;
	sprintf(buffer, "%i4444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444", 5);
	for (int i = 0; i < 16; i++)
		printf("%i ", buffer[i]);
	printf("\n");
	return 0;
}