#include <stdlib.h>
#include <stdio.h>

int input_length(void) {
    int max_len = 0;
    char *input;
    
    printf("Please enter how long you want your input string to be, press enter and then enter your input string:\n");
    scanf("%d\n", &max_len);
    
    input = (char *) malloc(max_len + 1); // + 1 for final 0x00 byte
    fgets(input, max_len + 1, stdin);
    
    printf("Read the string \"%s\"\n", input);
    
    return max_len;
}

int main(int argc, char *argv[]) {
    int len = input_length();
    printf("You provided an input string of max length %d\n", len);
    
    return 0;
}
