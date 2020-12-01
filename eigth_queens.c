#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	char	a;
	a = 'a';
	while (a < 'z')
	{
		pchar(a);
		a++;
	}
	return(0);
}

