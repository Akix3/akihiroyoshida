// C code for Maximum size square  
// sub-matrix with all 1s 
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>
#define bool int 
#define R 6 
#define C 5 

/* UTILITY FUNCTIONS */
/* Function to get minimum of three values */
int min(int a, int b, int c) 
{ 
	int m = a;
	if (m > b)
		m = b;
	if (m > c)
		m = c;
	return m;
}

void printMaxSubSquare(bool M[R][C], int fd) 
{ 
	int i,j;
	int S[R][C];
	int max_of_s, max_i, max_j;

	/* Set first column of S[][]*/
	for(i = 0; i < R; i++)
		S[i][0] = M[i][0];

	/* Set first row of S[][]*/
	for(j = 0; j < C; j++)
		S[0][j] = M[0][j];

	/* Construct other entries of S[][]*/
	for(i = 1; i < R; i++)
	{
		for(j = 1; j < C; j++)
		{
			if(M[i][j] == 1)
				S[i][j] = min(S[i][j-1], S[i-1][j], S[i-1][j-1]) + 1;
			else
				S[i][j] = 0;
		}
	}

	/* Find the maximum entry, and indexes of maximum entry in S[][] */
	max_of_s = S[0][0];
	max_i = 0;
	max_j = 0; 
	for(i = 0; i < R; i++) 
	{ 
		for(j = 0; j < C; j++) 
		{ 
			if(max_of_s < S[i][j])
			{
				max_of_s = S[i][j];
				max_i = i;
				max_j = j;
			}
		}
	}
	for (int i = 0; i < R; i++)
	{
		for (int j = 0; j < C; j++)
		{
			if (M[i][j] == 0)
			{
				write(fd, "o", 1);
			}
			else if (((max_i - max_of_s) < i && i <= max_i) &&
			((max_j - max_of_s) < j && j <= max_j))
			{
				write(fd, "x", 1);
			}
			else
			{
				write(fd, ".", 1);
			}
		}
		write(fd, "\n", 1);
	}
}

/* Driver function to test above functions */
int main()
{
	int fd;

	fd = open("./output.txt", O_RDWR);

	bool M[R][C] = {{0, 1, 1, 1, 1},
					{1, 1, 1, 0, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 0, 1}};
	printMaxSubSquare(M, fd);
}