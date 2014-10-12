#include <stdio.h>
#include <string.h>

int main() {
	char str[80];
	int i;

	printf("enter some stuff:\n");
	fgets(str, 10, stdin);

	i = strlen(str)-1;
	if(str[i] == '\n')
		str[i] = '\0';

	printf("Your input: %s\n", str);

	return 0;
}
