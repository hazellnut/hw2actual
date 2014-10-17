#include <stdio.h>
#include <stdlib.h>


int main(void) {

char c[256];
fgets(c, 256, stdin);

printf("%s", c);

return 0;
}