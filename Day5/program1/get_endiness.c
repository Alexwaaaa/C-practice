/*******************************************************************************
 *
 * @Filename   :  file_name.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program to get the endiness of the system
 *
 * little endian: last byte store first
 * big endian: first byte store first
 *
 *******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	int a = 1;

	char *ptr = (char *)&a;

	if (*ptr)
		printf("little endiness\n");
	else
		printf("big endiness\n");

	return 0;
}

