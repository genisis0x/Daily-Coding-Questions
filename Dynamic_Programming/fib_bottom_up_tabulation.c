#include <stdio.h>
#include <stdlib.h>

int fib_Dp(int n)
{
	int fib_tab[n + 1];
	for(int i =0; i <= n; i++)
	{
		if(i == 1 || i == 0)
			fib_tab[i] = i;
		else
			fib_tab[i] = fib_tab[i -1] + fib_tab[i -2];
	}
	return fib_tab[n];
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int n = atoi(av[1]);
		printf("The %dth fibonacci num is %d\n",n,fib_Dp(atoi(av[1])));
	}
	return 0;
}
