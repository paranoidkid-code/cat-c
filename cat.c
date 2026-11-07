
#include <stdio.h>


int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Could not open the file: '%s'\n", argv[1]);
        return 1;
    }
    printf("\n%s:\n\n", argv[1]);
    int ch;
    while ((ch = getc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");
    fclose(file);
    return 0;
}