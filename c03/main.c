#include <stdio.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"



/* ex00 ************************************ */

int	ft_strcmp(char *s1, char *s2);

void ex00(void)
{
	char s1[20] = "ABC";
	char s2[20] = "A";
	printf ("s1 = %s \ns2 = %s \nreturn = %d " , s1, s2,ft_strcmp(s1, s2));
	char s3[20] = "ab";
	char s4[20] = "bb";
	printf ("\ns1 = %s \ns2 = %s \nreturn = %d " , s3, s4,ft_strcmp(s3, s4));
	char s5[20] = "ab";
	char s6[20] = "ab";
	printf ("\ns1 = %s \ns2 = %s \nreturn = %d \n" , s5, s6,ft_strcmp(s5, s6));
}

/* ex01 ************************************ */

int	ft_strncmp(char *s1, char *s2, unsigned int n);

void ex01(void)
{
	char s1[20] = "ABC";
	char s2[20] = "A";
	int n = 2;
	printf ("s1 = %s \ns2 = %s \n n = %d \nreturn = %d " , s1, s2,n,ft_strncmp(s1, s2, n));
	char s3[20] = "ab";
	char s4[20] = "bb";
	n = 2;
	printf ("\ns1 = %s \ns2 = %s \n n = %d \nreturn = %d " , s3, s4,n,ft_strncmp(s3, s4, n));
	char s5[20] = "ab";
	char s6[20] = "ab";
	n = 2;
	printf ("\ns1 = %s \ns2 = %s \n n = %d \nreturn = %d " , s5, s6,n,ft_strncmp(s5, s6, n));
	char s7[20] = "abcdefgy";
	char s8[20] = "abcdefgh";
	n = 5;
	printf ("\ns1 = %s \ns2 = %s \n n = %d \nreturn = %d \n" , s7, s8,n,ft_strncmp(s7, s8, n));
}

/* ex02 ************************************ */

char	*ft_strcat(char *dest, char *src);

void ex02(void)
{
	char s1[] = "ABC";
	char s2[] = "A";
	printf ("s1 = %s \ns2 = %s \n" , s1, s2);
	printf ("return = %s\n",ft_strcat(s1, s2));
	char s3[] = "ab";
	char s4[] = "bb";
	printf ("s1 = %s \ns2 = %s \n" , s3, s4);
	printf ("return = %s\n",ft_strcat(s3, s4));
	char s5[] = "ab";
	char s6[] = "abcd";
	printf ("s1 = %s \ns2 = %s \n" , s5, s6);
	printf ("return = %s\n",ft_strcat(s5, s6));
}

/* ex03 ************************************ */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

void ex03(void)
{
	char s1[] = "ABC";
	char s2[] = "A";
	unsigned int i = 2;
	printf ("s1 = %s \ns2 = %s \nnb = %d \n" , s1, s2, i);
	printf ("return = %s\n",ft_strncat(s1, s2, i));
	char s3[] = "ab";
	char s4[] = "bb";
	i = 4;
	printf ("s1 = %s \ns2 = %s \nnb = %d \n" , s3, s4, i);
	printf ("return = %s\n",ft_strncat(s3, s4, i));
	char s5[] = "ab";
	char s6[] = "ab";
	i = 1;
	printf ("s1 = %s \ns2 = %s \nnb = %d \n" , s5, s6, i);
	printf ("return = %s\n",ft_strncat(s5, s6, i));
}

/* ex04 ************************************ */

char	*ft_strstr(char *str, char *to_find);

void ex04(void)
{
	char s1[] = "ABC";
	char s2[] = "A";
	printf ("s1 = %s \ns2 = %s \n" , s1, s2);
	printf ("return = %s\n",ft_strstr(s1, s2));
	char s3[] = "ab";
	char s4[] = "bb";
	printf ("s1 = %s \ns2 = %s \n" , s3, s4);
	printf ("return = %s\n",ft_strstr(s3, s4));
	char s5[] = "ccccabccc";
	char s6[] = "ab";
	printf ("s1 = %s \ns2 = %s \n" , s5, s6);
	printf ("return = %s\n",ft_strstr(s5, s6));
}

int main(void)
{
	int num = 0;
	while (num <= 1)
	{
		switch(num)
		{
			case 0:
				printf("ex00\n");
				ex00();
				printf("\n");
				break;
			case 1:
				printf("ex01\n");
				ex01();
				printf("\n");
				break;
		}
		num++;
	}
	if (num == 2)
	{
		printf("ex02\n");
		ex02();
		printf("\n");
		num++;
	}
	num = 3;
	if (num == 3)
	{
		printf("ex03\n");
		ex03();
		printf("\n");
		num++;
	}
	num = 4;
	if (num == 4)
	{
		printf("ex04\n");
		ex04();
		printf("\n");
		num++;
	}
	return (0);
}
