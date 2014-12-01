#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <syslog.h>

int main (int argc, char *argv[]) {
	char *DEBUG_LEVEL = "7";
	char *argv1 = argv[1];

	if (argv[1] == NULL)
	{
		printf("You have to specify level!\n");
		exit(1);
	}


	// That is not making any sense because if you have one choice
	// you don't need and argument here : )
	if (strcmp(argv1, DEBUG_LEVEL) != 0)
	{
		printf("It has to be a debug level!\n");
		exit(1);
	}

	syslog (LOG_MAKEPRI(LOG_LOCAL1, LOG_DEBUG), 
		"Buggy buggy!");

	return 0;
}