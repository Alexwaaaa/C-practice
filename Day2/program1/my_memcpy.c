/*******************************************************************************
 *
 * @Filename   :  my_memcpy.c
 *
 * @Author     :  Md Sikandar
 *
 * @Brief      :  C program to implements its own memcpy
 *
 *******************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void my_memcpy(void *dst, const void *src, size_t len)
{

	if (src == NULL)
		return;

	char* t_src = (char *) src;
	char* t_dst = (char *) dst;

	for (int i = 0; i < len; i++)
	{
		t_dst[i] = t_src[i];

	}

	return ;
}

int main()
{
	int src = 7;
	int dst = 0;
	size_t len = sizeof(src);

	my_memcpy(&dst, &src, len);

	printf("Destination :%d\n", dst);

	return 0;
}

