#include <syslog.h>

int main () {
	syslog (LOG_MAKEPRI(LOG_LOCAL1, LOG_INFO), 
		"Hello syslog!");

	return 0;
}