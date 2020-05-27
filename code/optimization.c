#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void copy(char *s) {
    char buffer[8];
    strcpy(buffer, s);
}

int main(int argc, char *argv[]) {
    copy(argv[1]);
    exit(0);
}
