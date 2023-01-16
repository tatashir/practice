#include <stdio.h>

int main()
{
	int i;
	char *s = "12345";
	i = 0;
	while (*s)
	{
		printf("%c", *s);
		s++;
	}
	return 0;
}

