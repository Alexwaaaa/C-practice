/*******************************************************************************
 *
 * @Filename   :  file_name.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program takes two strings as input and checks whether
 *					two strings are anagrams
 *
 *******************************************************************************/

/* Anagrams: all the characters that occur for the same number of times
 * in another string
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_two_strings_are_anagrams(char *str1, char *str2)
{
	int freq_ctr1[26] = {0};
	int freq_ctr2[26] = {0};
	int len1 = 0, len2 = 0;
	int i = 0;

	len1 = strlen(str1);
	len2 = strlen(str2);

	if (len1 != len2)
		return false;

	for (i = 0; i < len1; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			freq_ctr1[str1[i] - 97]++;
		}


		if (str2[i] >= 'a' && str2[i] <= 'z')
		{
			freq_ctr2[str2[i] - 97]++;
		}
	}

	for (i = 0; i < 26; i++)
	{
		if (freq_ctr1[i] != freq_ctr2[i])
		{
			return false;
		}
	}

	return true;
}

int main(int argc, char** argv)
{
	if (argc < 3)
	{
		printf("Input arguments is less\n" \
			   "please pass two stings as a input\n");
		return 0;
	}

	printf("Strings1: %s and Strings2: %s\n", argv[1], argv[2]);

	if (is_two_strings_are_anagrams(argv[1], argv[2]))
	{
		printf("String1: %s and String2: %s are Anagrams\n", argv[1], argv[2]);
	}
	else
	{
		printf("String1: %s and String2: %s are not Anagrams\n", argv[1], argv[2]);
	}

	return 0;
}

