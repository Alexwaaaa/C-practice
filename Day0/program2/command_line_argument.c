/*******************************************************************************
 *
 * @Filename   :  file_name.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program to take the input as a command line arguments
 *
 *******************************************************************************/
#include <stdio.h>
#include <string.h>
/*
 * argc : its integer which count the number of arguments
 *			If argc is greater than zero,
 *			the array elements from argv[0] to argv[argc-1] will contain pointers to strings.
 * argv : Its a argument vector a char pointer to the 2d array.
 *			is array of character pointers listing all the arguments.
 *			argv[0] is the name of the program ,
 */
int main(int argc, char **argv)
{

	printf("Program name is: %s\n", argv[0]);
	printf("Number of arguments passed: %d\n", argc);

	/* Print each argument passed */
	for (int i = 1; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}

