// https://github.com/raton-codeur/tests/blob/main/README.md#get_next_line

#include "../../get_next_line.h"
// #include "../../get_next_line_bonus.h"
#include <stdio.h>
#include <fcntl.h>
#include <assert.h>

/* descripteur de fichier invalide. */
// int main()
// {
// 	int fd = 42;
// 	char *line;

// 	line = get_next_line(fd);
// 	assert(line == NULL);
// }

/* si ff est un fichier vide */
// int main()
// {
// 	int fd = open("tests/get_next_line/ff", O_RDONLY);
// 	char *line = get_next_line(fd);
// 	assert(fd != -1 && line == NULL);
// 	close(fd);
// }

/* si fff ne contient qu'une seule ligne non vide */
// int main()
// {
// 	int fd = open("tests/get_next_line/fff", O_RDONLY);
// 	char *line = get_next_line(fd);
// 	printf("<%s>", line);
// 	free(line);
// 	line = get_next_line(fd);
// 	printf("<%s>", line);
// 	// assert(line == NULL);
// 	close(fd);
// }

/* pour f quelconque */
// int main()
// {
// 	int fd = open("tests/get_next_line/f", O_RDONLY);
// 	char *line = get_next_line(fd);
// 	while (line != NULL)
// 	{
// 		printf("<%s>", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	printf("<%s>", line);
// 	close(fd);
// }

/* depuis l'entrée standard */
// int main()
// {
// 	int fd = 0;
// 	char *line = get_next_line(fd);
// 	while (line != NULL)
// 	{
// 		printf("<%s>", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// 	printf("<%s>", line);
// }

/* partie bonus */

/* pour trois fichiers f, g, h quelconques */
// int main()
// {
// 	char *line;
// 	int fd1 = open("tests/get_next_line/f", O_RDONLY);
// 	int fd2 = open("tests/get_next_line/g", O_RDONLY);
// 	int fd3 = open("tests/get_next_line/h", O_RDONLY);

// 	line = get_next_line(fd1);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd2);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd1);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd3);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd2);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd3);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd1);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd2);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd1);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd3);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd2);
// 	printf("<%s>", line);
// 	free(line);

// 	line = get_next_line(fd3);
// 	printf("<%s>", line);
// 	free(line);
// }
