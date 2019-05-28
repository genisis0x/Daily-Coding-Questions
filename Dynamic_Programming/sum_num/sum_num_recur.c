#include <stdio.h>
#include <stdlib.h>

int solve(int n)
{
	if(n < 0)
		return 0;
	if(!n)
		return 1;
	return (solve(n -1) + solve(n -3) + solve(n -5));
}


int main(int ac, char **av)
{
	if(ac == 2)
		printf("The total no of ways %d\n", solve(atoi(av[1])));
	return 0;
}
