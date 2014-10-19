#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// TODO see the code of cp command!
// There are a lot options to implement here that are far more interesting than fprintf : )

int main(int argc, char *argv[])
{
	FILE *f;
	FILE *d;
	char line[10];

	f = fopen(argv[1], "rt");

	if (f == NULL)
	{
		printf("Error opening file %s!\n", argv[1]);
		exit(1);
	}

	d = fopen(argv[2], "w");

	if (d == NULL)
	{
		printf("Error opening file %s!\n", argv[1]);
		exit(1);
	}

	while(fgets(line, 10, f) != NULL)
	{
		fprintf(d, "%s", line);
	}

	fclose(f);
	fclose(d);

	return 0;
}