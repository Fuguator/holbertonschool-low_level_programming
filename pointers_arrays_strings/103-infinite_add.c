#include "main.h"
/**
 * infinite_add - func
 * @n1: str 1
 * @n2: str 2
 * @r: result
 * @size_r: size of result
 * Return: result or 0 (if size small)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int lenn1, lenn2, temp, rev, a, sum, num1, num2, carry;
	char tmp[size_r * size_r];

	lenn1 = lenn2 = rev = a = sum = num1 = num2 = carry = 0;
	for (lenn1 = 0; n1[lenn1] != '\0'; lenn1++)
	for (lenn2 = 0; n2[lenn2] != '\0'; lenn2++)

	if (l1 + 2 > size_r || l2 + 2 > size_r)
		return (0);

	lenn1--, lenn2--;
	while (a <= lenn1 || a <= lenn2)
	{
		num1 = (a <= lenn1) ? n1[lenn1 - a] - '0' : 0;
		num2 = (a <= lenn2) ? n2[lenn2 - a] - '0' : 0;
		sum = num1 + num2 + carry;
		carry = (sum >= 10) ? (sum -= 10, 1) : 0;
		r[a] = sum + '0';
		a++, rev++;
	}
	if (carry > 0)
		r[a] = carry + '0', r[a + 1] = '\0';
	a = temp = 0;
	while (a <= rev)
		tmp[a] = r[rev - a], temp++, a++;
	a = 0;
	while (a < temp)
	{
		if (r[a] == '\0')
			break;
		r[a] = tmp[a], a++;
	}
	return (r);
}
