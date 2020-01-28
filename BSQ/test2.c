#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	write(STDOUT_FILENO, str, i);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_fgets(int fd, char *buf)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (flag)
	{
		if (!read(fd, &buf[i], 1))
			return;
		if (buf[i] == '\n')
			flag = 0;
		i++;
	}
}

int main(void)
{
	int fd;
	char buf[256];

	fd = open("./output.txt", O_RDWR);
	ft_fgets(fd, buf);
	ft_putstr(buf);
}
