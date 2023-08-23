#include <stdio.h>
int len (char * c)
{
	int len = 0;

	while (c[len] != '\0')
	{
		len ++;
	}
	return (len);
}
int main (void)
{
	char * str = "My first strlen!";
	int l =len (str);
	printf("%d\n", l);
	return (0);
}
