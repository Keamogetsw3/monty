#include "monty.h"

/* Global stack pointer */
stack_t *stack = NULL;

/**
 * main - The entry point for the Monty program.
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 *
 * Return: 0 on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: monty file\n");
        exit(EXIT_FAILURE);
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
      {
	fprintf(stderr, "Error: cant open file %s\n", argv[1]);
	exit(EXIT_FAILURE);
      }

    char line[256];
    while (getline(line, sizeof(line), file));

    fclose(file);
    
    return (0);

}
