


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "PIDManager.c"

int main()
{
	allocate_map();
	int j = allocate_pid();
	fprintf(stdout, "Allocated PID: %d \n", j);
	release_pid(j);
}
