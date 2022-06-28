#include <stddef.h>

// Return the length of the stored greeting.
size_t greeting_len(void);

// Fill the buffer with a friendly greeting, up to len characters.
void obtain_greeting(char *buf, size_t len);