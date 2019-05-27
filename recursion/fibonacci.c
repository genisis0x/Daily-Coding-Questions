#include <stdio.h>
#include <stdlib.h>

int fib_rec(int n)
{
	if(n <= 1)
		return n;
	return (fib_rec(n -1) + fib_rec(n -2));
}

int main(int ac, char **av)
{
	if(ac == 2)
	{
		int n = atoi(av[1]);
		printf("The %dth fibonacci num is %d\n",n,fib_rec(atoi(av[1])));
	}
	return 0;
}
