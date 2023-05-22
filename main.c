#include "monty.h"
info_t info = {NULL, NULL, NULL, 0};
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
ssize_t read_line;

content = NULL;
read_line = 0;
if (argc != 2)
{
    fprintf(stderr, "Usage: executable montyfilename");
    exit(EXIT_FAILURE);
}
file = fopen(argv[1], "r");
info.file = file;
if (file == NULL)
{
    fprintf(stderr, "File can not be opend");
    exit(EXIT_FAILURE);
}
/* start reading lines from monty file*/
read_line = getline(&content, &len, file);
printf("size of \tlen = %lu\tread: %ld", len, read_line);
return (0);
}
