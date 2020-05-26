#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char global_buffer[256];

int main(int argc, char *argv[]) {
    char local_buffer[32];

    printf("Data to be put into the global buffer:\n");
    read(STDIN_FILENO, global_buffer, 256);
    printf("Data to be put into the local buffer:\n");
    read(STDIN_FILENO, local_buffer, 256);  // Buffer overflow vulnerability: read up to 256 bytes into 32 byte buffer

    printf("Global buffer content: %s\nLocal buffer content: %s\n", global_buffer, local_buffer);

    return 0;
}
