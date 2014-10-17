#include <stdio.h>

int main (void) {
	char *searchText = NULL;
	while ((searchText = getchar()) != '\n') {
	searchText ++;
	}
	printf("%s", searchText);
	return 0;
}