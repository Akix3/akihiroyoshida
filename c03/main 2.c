#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"

 // ex00
int	main(void)
{
	char str1[] = "";
	char str2[] = "ABC";

	printf("%d\n", strcmp(str1,str2));
	printf("%d\n", ft_strcmp(str1,str2));
}

// ex01
// int main(void)
// {
// 	char str1[] = "ABCD";
// 	char str2[] = "A";

// 	printf("%d\n", strncmp(str1,str2,2));
// 	printf("%d\n", ft_strncmp(str1,str2,2));
// }

// ex02
// int main(void)
// {
// 	char str1[10] = "ABCDEF";
// 	char str2[10] = "ABCDEF";
// 	char src1[] = "BCD";
// 	char src2[] = "BCD";
// 	char *pstdstr;
// 	char *pmystr;

// 	pstdstr = strcat(str1,src1);
// 	pmystr = ft_strcat(str2,src2);
// 	printf("%p : %s\n", pstdstr, str1);
// 	printf("%p : %s\n", pmystr, str2);
}
// ex03
// int main(void)
// {
// 	char str1[10] = "ABCDEF";
// 	char str2[10] = "ABCDEF";

// 	char src1[] = "ABCDE";
// 	char src2[] = "ABCDE";
// 	char *pstdstr;
// 	char *pmystr;

// 	pstdstr = strncat(str1, src1, 0);
// 	pmystr = ft_strncat(str2, src2, 0);
// 	printf("%s\n", str1);
// 	printf("%s\n", str2);
// }

// ex04
// int main(void)
// {
// 	char str1[] = "ABCDEF";
// 	char str2[] = "F";

// 	printf("%p\n", strstr(str1,str2));
// 	printf("%p\n", ft_strstr(str1,str2));
// }

// ex05
// int main(void)
// {
// 	char str1[] = "ABCDEF";
// 	char str2[] = "F \n";

// 	printf("%lu\n", strlcat(str1,str2, 3));
// 	printf("%u\n", ft_strlcat(str1,str2, 3));
// }
