#include "monty.h"
#include <stdio.h>
info_t info = {NULL, NULL, NULL, 0};
stack_t *stack = NULL;
/**
 * main - entry point of the program
 * @arc: count of arguments provided by user
 * @argv: array of argumbers provide by user
 * Return: 0 on success, 1 of faliur
 */
int main (int argc, char *argv[])
{
    FILE *file;
    char *content;
    size_t len;
    int read_line;
    unsigned int l_count;
    content = NULL;
    read_line = 0;
    l_count = 0;
    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    file = fopen(argv[1], "r");
    info.file = file;
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file <%s>\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    /* start reading lines from monty file*/
    while (read_line > 0)
    {
        content = NULL;
        read_line = (int)getline(&content, &len, file);
        if (ferror(file))
        {
            fprintf(stderr, "Error: error while reading file\n");
            free(content);
            fclose(file);
            free_stack(stack);
            exit(EXIT_FAILURE);
        }
        l_count++;
        info.content = content;
        if (read_line > 0)
        {
            execute(content, &stack, l_count, file);
        }
        free(content);
    }
    free_stack(stack);
    fclose(file);
    return (0);
}
