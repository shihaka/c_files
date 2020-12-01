#include <unistd.h>

void	pchar(char c)
{
	write(1, &c, 1);
}

int	main()
{
	int	a;
	a = 0;
	while (a < 10)
	{
		pchar('0');
		a++;
	}
	return(0);
}

