/*******************************************************************************
 *
 * @Filename   :  file_name.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program to check the endiness and convert one endian to another.
 *
 *******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define myswap(v) ((((v) & 0x000000ff) << 24) \
				 | (((v) & 0x0000ff00) << 8) \
				 | (((v) & 0x00ff0000) >> 8) \
				 | (((v) & 0xff000000) >> 24))

void swap_endiness()
{
	int num = 0x11223344;

	printf("======== Before endian swap num : %d ========\n", num);
	printf("======== After endian swap num: %d =======\n", myswap(num));

}

void check_endian_method1()
{
	int i = 1;
	char *ptr = (char *)&i;

	if (*ptr)

		printf("======== little endian ========\n");
	else
		printf("======== Big endian ===========\n");
}

void check_endian_method2()
{
	int num = 0x01234567;
	char *ptr = (char *)&num;

	for (int i = 0; i < 4; i++)
	{
		printf("Address of 0x%x = %d\n", ptr[i], &ptr[i]);
	}
}
int main()
{
	check_endian_method1();
	check_endian_method2();

	swap_endiness();
	return 0;
}

