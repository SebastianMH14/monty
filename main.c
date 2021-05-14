#include "monty.h"

/**
*main - getiline
*@argc: number of arguments
*@argv: argumetns
*
*Return: EXIT_SUCCESS
*/
int main(int argc, char *argv[])
{
	int i;
	ssize_t readline;
	ssize_t buffer = 1024;
	unsigned int = count_lines = 0;
	char *token, *buf_line = NULL, limit = " \t\n\r\a";
	stack_t *head = NULL;

    if (argc != 2)
    {
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
    }

	glob.fd = fopen(argv[1], "r");

	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((readline = getline(&buf_line, buffer, fd)) != -1)
	{
		token = malloc(sizeof(char *) * strlen(buf_line));
		if (token == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		token = strtok(buf_line, limit);
		if (token)
		{
			glob.dato = token[1];
			selec_fun(&head, token, count_lines);
		}
		count_lines++;
		free(buf_line)
		fdclose(fd);
		exit(EXIT_FAILURE);
	}
}

