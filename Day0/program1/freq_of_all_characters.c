/*******************************************************************************
 *
 * @Filename   :  file_name.c
 *
 * @Author     :  Md Sikandar
 *
 * @email      :  mdsikandar.info@gmail.com
 *
 * @Brief      :  C program to count frequency of each character
 *
 *******************************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
	char str[100] = {0};
	int  char_freq[26] = {0};
	int i = 0, len = 0;

	printf("Enter the string\n");
	scanf("%s", str);

	printf("Given string is %s\n", str);
	len = strlen(str);
	for (i = 0;  i < len; i++)
	{
		//printf("%c\n", str[i]);
		/* For smallercase alphabets */
		if (str[i] >='a' && str[i] <= 'z')
		{
			char_freq[str[i] - 97]++;
		}

		/* For Uppercase alphabets */
		if (str[i] >='A' && str[i] <= 'Z')
		{
			char_freq[str[i] - 65]++;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (char_freq[i] != 0)
		{
			printf("count of %c:  %d\n", i + 97, char_freq[i]);
		}
	}
	return 0;
}

