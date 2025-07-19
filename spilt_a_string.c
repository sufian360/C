#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello World! Welcome to C programming.";
    const char delim[2] = " ";
    char *token;

    /* get the first token */
    token = strtok(str, delim);

    /* walk through other tokens */
    while( token != NULL ) {
        printf( "%s\n", token );
        token = strtok(NULL, delim);
    }

    return 0;
}
