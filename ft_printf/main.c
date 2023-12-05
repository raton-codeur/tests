// https://github.com/raton-codeur/tests/blob/main/README.md#ft_printf

#include "../../ft_printf.h"
#include <stdio.h>
#include <assert.h>

/* unsigned int */
int	main()
{
	unsigned int a = 10;
	char *s = "%u";
	printf("result :\n");
	int result = ft_printf(s, a);
	printf("\nexpected :\n");
	int expected = printf(s, a);
	assert(result == expected);
}

