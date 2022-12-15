void print_triangle(int size)
{
	int i, j;

	if (total > 0)
	{
		for (i = 1; i <= total; i++)
		{
			for ((j = total - i); j > 0; j--)
				putchar(' ');

			for (j = 0; j < i; j++)
				putchar('#');

			if (i == total)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}
