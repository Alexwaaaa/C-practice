/*******************************************************************************
 *
 * @Filename   :  remove_digit_from_string_using_pointer.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program to remove digits from a strings using pointer concepts
 *
 *******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

char* remove_digit(char *str)
{

	if (str == NULL)
		return NULL;

	char *src = str;
	char *dst = str;

	printf("src: %s and dst: %s\n", src, dst);

	while (*src)
	{
		if (*src >= '0' && *src <= '9')
		{
			src++;
			continue;
		}
		*dst++ = *src++;
	}
	*dst = '\0';
	return dst;
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

