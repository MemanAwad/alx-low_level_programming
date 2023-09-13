/** 
 * get_op_func - return the right function
 * @s: the operator
 * Return: pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (ops[i][0] != NULL)
	{
		if (*s == op[i][0])
		{
			return (op[i][i]);
		}
		i++;
	}
	return (NULL);
}
