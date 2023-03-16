#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - multiplies two numbers
 * @num1: first number
 * @num2: second number argument
 * Return: result success
 */

int multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0;
	int i;

	for (i = 0; num1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		len2++;
	}

	int *result = calloc(len1 + len2, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		int carry = 0;

		int n1 = num1[i] - '0';
	}
	
	int j;

	for (j = len2 - 1; j >= 0; j--)
	{
		int n2 = num2[j] - '0';
		int sum = n1 * n2 + result[i + j + 1] + carry;

		result[i + j + 1] = sum % 10;
		carry = sum / 10;
	}
	result[i] += carry;

	int i = 0;

	while (result[i] == 0 && i < len1 + len2 - 1)
	{
		i++;
	}

	 int res = 0;

	 while (i < len1 + len2)
	 {
		 res = res * 10 + result[i];
		 i++;
	 }
	 free(result);
	 return (res);
}
