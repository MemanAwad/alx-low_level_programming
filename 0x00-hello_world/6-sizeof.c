#include<stdio.h>
/**
 * main - This function will print some text
 *
 * Return: this function will print the size of various type and will return zero to end program
 */
int main(void)
{
		printf("size of a char: %zu byte(s)\n", sizeof(char));
		printf("size of an int: %zu byte(s)\n", sizeof(int));
		printf("size of a long int: %zu byte(s)\n", sizeof(long int));
		printf("size of a long long int: %zu byte(s)\n", sizeof(long long int));
		printf("size of a float: %zu byte(s)\n", sizeof(float));
		return (0);
}
