#include <string.h>
#include "simple.h"

static char *GREETING = "Hello, world!";

size_t greeting_len(void) {
	return strlen(GREETING);
}

void obtain_greeting(char *buf, size_t len) {
	size_t full_len = greeting_len();
	if (len <= full_len) {
		strcpy(buf, GREETING);
		return;
	}
	// Otherwise, just copy what will fit.
	char substring_buf[len - 1];
	memcpy(substring_buf, GREETING, len - 1);
	substring_buf[len] = '\0';
	strcpy(buf, substring_buf);
	return;
}