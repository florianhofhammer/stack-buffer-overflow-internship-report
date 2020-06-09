#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void function(void) {
    system("Some random command");
}

int main(int argc, char *argv[]) {
    struct {
        long long int length;
        char content[8];
        char *ptr;
    } string;

    string.length = 8;
    string.ptr = string.content;

    read(STDIN_FILENO, string.ptr, 16);
    printf("Array has %s at %p\n", string.ptr, string.ptr);
    read(STDIN_FILENO, string.ptr, 16);
    printf("Array has %s at %p\n", string.ptr, string.ptr);

    return 0;
}
