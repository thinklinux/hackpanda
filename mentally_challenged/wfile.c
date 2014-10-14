#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int is_whitespace(char ch) {
	return ch == ' ' || ch == '\f' || ch == '\n' ||
			ch == '\r' || ch == '\t' || ch == '\v';
}

int main(int argc, char *argv[]) {
	int BUFFER_SIZE = 10;
	char str[BUFFER_SIZE];
	char word[BUFFER_SIZE];
	int i;

	printf("Enter some stuff:\n");
	fgets(str, BUFFER_SIZE, stdin);

	for(i=0; i < BUFFER_SIZE; i++) {
		if(is_whitespace(str[i])) {
			break;
		}

		word[i] = str[i];
	}

	if (argv[1] == NULL)
	{
		printf("Error: you have to specify a filename as first argument!\n");
		exit(1);		
	}

	printf("Writing %s into a file %s\n", word, argv[1]);

	FILE *f = fopen(argv[1], "w");
	if (f == NULL)
	{
		printf("Error opening file!\n");
		exit(1);
	}

	fprintf(f, "%s\n", word);

	fclose(f);

	printf("The file has been successfully written!\n");

	printf("\n");

	return 0;
}
