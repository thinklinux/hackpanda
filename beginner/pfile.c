#include <stdio.h>

int main()
{
	FILE *f;
	char line[10];

	f = fopen("test.txt", "rt");

	while(fgets(line, 10, f) != NULL)
	{
		printf("%s", line);
	}

	fclose(f);

	return 0;
}