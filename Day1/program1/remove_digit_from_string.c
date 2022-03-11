/*******************************************************************************
 *
 * @Filename   :  remove_digit_from_string.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program to remove digits from a strings
 *
 *******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* remove_digit(char *str)
{
	int len = 0, i = 0;
	int j = 0;

	if (str == NULL)
		return NULL;

	len = strlen(str);
	printf("len: %d\n", len);

	for (i = 0; i < len; i++)
	{
		if ((str[i] >= '0') && (str[i] <= '9'))
		{
			continue;
		}

		str[j] = str[i];
		j++;
	}
	str[j] = '\0';

	return str;
}

int main()
{
	char str[100] = {0};

	printf("Enter the string\n");
	scanf("%s", str);

	printf("Given string is :%s\n", str);

	if (remove_digit(str))
	{
		printf("String after removing the digit: %s\n", str);
	}
	return 0;
}

