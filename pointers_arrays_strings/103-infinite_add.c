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
	int len1, len2, temp, rev, a, sum, num1, num2, carry;
	char tmp[10000];

	len1 = len2 = rev = a = sum = num1 = num2 = carry = 0;
	for (len1 = 0; n1[len1] != '\0'; len1++)
	for (len2 = 0; n2[len2] != '\0'; len2++)

	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);

	len1--, len2--;
	while (a <= len1 || a <= len2)
	{
		num1 = num2 = 0;
		if (a <= len1)
			num1 = n1[len1 - a] - '0';
		if (a <= len2 && (len2 - a) >= 0)
			num2 = n2[len2 - a] - '0';
		sum = num1 + num2 + carry;
		if (sum >= 10)
			carry = 1, sum -= 10;
		else
			carry = 0;
		r[a] = sum + '0', a++, rev++;
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
