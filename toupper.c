#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* toupper(char* string) {
	
	int i;
	for (i=0; i< strlen(string); i++) {
		string[i] = toupper(string[i]));
	}
	return (string);
}