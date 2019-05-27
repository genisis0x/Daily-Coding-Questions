#include <stdio.h>
#define n 40

int fib_tab[n + 1];
int fib(int nb)
{
	if(fib_tab[nb] == -1)
	{
		if (nb <= 1)
			fib_tab[nb] = nb;
		else
			fib_tab[nb] = fib(nb -1) + fib(nb -2);
	}
	return fib_tab[nb];
}

int main()
{

	for(int i = 0; i <= n; i++)
	{
		fib_tab[i] = -1;
	}
	printf("%d",fib(n));
	return (0);
}
