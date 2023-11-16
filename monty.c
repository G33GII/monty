#include "monty.h"
/**
 * 
 * 
*/
program data = {NULL, 0, NULL, NULL, NULL, NULL};
int main(int argc, char **argv)
{
    FILE *folder;
    char buf[bufsize];
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    folder = fopen(argv[1], "r");

    if (folder == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    
    while (fgets(buf, bufsize, folder))
    {
        data.line_number++;
        data.line = buf;
        execute();
    }
        fclose(folder); 
        free(data.line);
    return (0);
}