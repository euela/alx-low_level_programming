void print_square(int size)
{
	int i, j;
	if (total > 0)
	{
		for (i = 0; i < total; i++)
		{
			for (j = 0; j < (lenght - 1); j++)
				putchar('#');

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
