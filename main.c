#include "monty.h"
bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - monty code interpreter
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, other value on failur
*/
int main(int argc, char *argv[])
{
	stack_t *stack;
	char *content;
	unsigned int counter;
	FILE *file;
	size_t size;
	ssize_t read_line;
	size = 0;
	read_line = 1;
	counter = 0;
	stack = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			execute(content, &stack, counter, file);
		}
		free(content);
	}
	free_stack(stack);
	fclose(file);
return (0);
}
