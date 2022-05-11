/*******************************************************************************
 *
 * @Filename   :  file_name.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program to copy two file into single file.c
 *
 *******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	FILE *f_ptr1  = NULL, *f_ptr2 = NULL, *f_ptr3 = NULL;
	char s_file1[128] = {'\0'};
	char s_file2[128] = {'\0'};
	char dst_file[128] = {'\0'};
	char ch = '\0';

	printf("Enter the 1st file\n");
	scanf("%s", s_file1);
	printf("Enter the 2nd file\n");
	scanf("%s", s_file2);
	printf("Enter the 3rd file\n");
	scanf("%s", dst_file);

	f_ptr1 = fopen(s_file1, "r");
	f_ptr2 = fopen(s_file2, "r");
	f_ptr3 = fopen(dst_file, "w+");

	if ((f_ptr1 == NULL) || (f_ptr2 == NULL) || (f_ptr3 == NULL))
	{
		printf("Unable to open file\n");
		return -1;
	}

	while((ch = fgetc(f_ptr1)) != EOF)
	{
		fputc(ch, f_ptr3);
	}

	while((ch = fgetc(f_ptr2)) != EOF)
	{
		fputc(ch, f_ptr3);
	}

		printf("ddd2\n");
	fclose(f_ptr3);
	f_ptr3 = fopen(dst_file, "r+");
	while((ch = fgetc(f_ptr3)) != EOF)
	{
		printf("%c", ch);
	}

	fclose(f_ptr1);
	fclose(f_ptr2);
	fclose(f_ptr3);
	return 0;
}

