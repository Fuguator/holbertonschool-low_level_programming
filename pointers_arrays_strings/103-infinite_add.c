#include "main.h"
/**
 * infinite_add - func
 * @n1: variable
 * @n2: variable
 * @r: variable
 * @size_r: variable
 * Return: r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, k, l, m, n;

	for (i = 0; n1[i]; i++)
	for (j = 0; n2[j]; j++)
	if (i > size_r || j > size_r)
		return (0);
	m = 0;
	for (i -= 1, j -= 1, k = 0; k < size_r - 1; i--, j--, k++)
	{
		n = m;
		i >= 0 ? n += n1[i] - '0' : 0;
		j >= 0 ? n += n2[j] - '0' : 0;
		if (i < 0 && j < 0 && n == 0)
			break;
		m = n / 10, r[k] = n % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || j >= 0 || m)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
		m = r[k], r[k] = r[l], r[l] = m;
	return (r);
}
