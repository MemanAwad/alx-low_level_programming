#include <stdio.h>

int len(char *str)
{

	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return (1+len(str + 1));
	}
}
int main (void)
{
	int lenn;
	lenn = len("hello");
	printf("%d\n", lenn);
	return (0);
}
