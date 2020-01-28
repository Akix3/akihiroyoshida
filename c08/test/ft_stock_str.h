#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

#include <unistd.h>
#include <stdlib.h>

typedef struct	s_stock_str
{
	int size;
	char *str;
	char *copy;
}				t_stock_str;

#endif
