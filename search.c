#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
	char searchText[256] ;

	
	char* test = "hello, this is a this test sample";
	printf("Search text: ");
	fflush(stdout);
	fgets(searchText, 256, stdin);
	int i;
	for (i=0; i< strlen(searchText); i++) {
		if (searchText[i] == '\n') {
			searchText[i] = '\0';
		}
	}
	
	while (i < strlen(test) - strlen(searchText)){
		for  
		
		char* temp = strcasestr(test, searchText);
		if (temp != NULL) {
			printf("%s\n", temp);
			test = test + (strlen(test) - strlen(temp) + strlen(searchText));
		}
		else {
		test++;
		}
	}	 
	return 0;
}