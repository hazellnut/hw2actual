#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char* getSearch(char searchText[256]) {
	printf("test1\n");
	printf("Search text: ");
	fflush(stdout);
	fgets(searchText, 256, stdin);
	//printf("test2\n");
	int i;
	for (i=0; i < strlen(searchText); i++) {
		printf("test3");
		if (searchText[i] == '\n') {
			searchText[i] = '\0';
			i--;
		}
	}
	printf("done");
	printf("%s", searchText);
	return (searchText);
}	
}