#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: number to add
 * @n2: number to add
 * @r: result
 * @size_r: butter size
 *
 * Return: pointer to r
 * else return 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0;
	int max_len, result_len, i, d1, d2, sum;

	while (*n1 != '\0')
	{
		len1++;
		n1++;
	}
	n1--;

	while (*n2 != '\0')
	{
		len2++;
		n2++;
	}
	n2--;

	max_len = (len1 > len2) ? len1 : len2;
	if (max_len + 2 > size_r)
		return (0);

	r[max_len + 1] = '\0';
	for (i = 0; i <= max_len; i++)
	{
		d1 = (i < len1) ? (*n1-- - '0') : 0;
		d2 = (i < len2) ? (*n2-- - '0') : 0;
		sum = d1 + d2 + carry;
		carry = sum / 10;
		r[max_len - i] = (sum % 10) + '0';
	}

	result_len = max_len + 1;
	if (r[0] == '0')
	{
		for (i = 0; i < max_len; i++)
			r[i] = r[i + 1];
		result_len = max_len;
	}
	r[result_len] = '\0';
	return (r);
}

