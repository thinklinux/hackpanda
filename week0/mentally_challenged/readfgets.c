#include <stdio.h>
#include <string.h>

int is_whitespace(char ch) {
	return ch == ' ' || ch == '\f' || ch == '\n' ||
			ch == '\r' || ch == '\t' || ch == '\v';
}

int main() {
	int BUFFER_SIZE = 10;
	char str[BUFFER_SIZE];
	int i;

	printf("Enter some stuff:\n");
	fgets(str, BUFFER_SIZE, stdin);
	printf("Your first word is: \n");

	for(i=0; i < BUFFER_SIZE; i++) {
		if(is_whitespace(str[i])) {
			break;
		}

		printf("%c", str[i]);
	}

	printf("\n");

	return 0;
}
