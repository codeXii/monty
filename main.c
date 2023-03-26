#include "monty.h"
#include "buf.h"
/**
 * main - main function for monty interpreter
 * @argc: argument count
 * @argv: arrays of arguments
 * Return: returs 0 on success
 */
int main(int argc, string argv[])
{
	string command;
	FILE *file;
	size_t n = 0;
	/*string str = NULL;*/
	ssize_t readl = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	buf.file = file;

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (readl > 0)
	{
		command = NULL;
		readl = getline(&command, &n, file);
		buf.command = command;
		count++;
		if (readl > 0)
			exec_op(command, &stack, count, file);
		free(command);
	}
	free_dlist(stack);
	fclose(file);
return (0);
}
