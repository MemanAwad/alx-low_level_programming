#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	char *concat, *cat, *con;

	concat = string_nconcat(NULL, "school", 6);
	printf("%s\n", concat);
	cat = string_nconcat("best", NULL, 6);
	printf("%s\n", cat);
	con = string_nconcat("best", "schoolllllll", 6);
	printf("%s\n", con);
	free(concat);
	free(cat);
	free(con);
	return (0);
}
