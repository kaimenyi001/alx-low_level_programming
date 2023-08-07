#include "main.h"

/**
 * error_file - checks if files can be opened.
 * @file_in: file in
 * @file_out: file to...
 * @argv: arguments vector
 * Return: void
 */

void error_file(int file_in, int file_out, char *argv[])
{
	if (file_in == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_out == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_in, file_out, err_dn;
	ssize_t n, i;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_in file_out");
		exit(97);
	}

	file_in = open(argv[1], O_RDONLY);
	file_out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_in, file_out, argv);

	n = 1024;
	while (n == 1024)
	{
		n = read(file_in, b, 1024);
		if (n == -1)
			error_file(-1, 0, argv);
		i = write(file_out, b, n);
		if (i == -1)
			error_file(0, -1, argv);
	}

	err_dn = close(file_in);
	if (err_dn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}

	err_dn = close(file_out);
	if (err_dn == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_in);
		exit(100);
	}
	return (0);
}
