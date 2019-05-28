#include <stdio.h>
#include <stdlib.h>
int solve(int nb, int arr[])
{
	if(nb < 0)
		return 0;
	if(nb == 0)
		return 1;
	if(arr[nb] == -1)
		return arr[nb] = solve(nb - 1, arr) + solve(nb - 3, arr) + solve(nb - 5, arr);
	return arr[nb];
}


int main(int ac, char **av)
{
	int a = atoi(av[1]);
	int arr[a + 1];
	for(int i =0; i <= a; i++)
		arr[i] = -1;
	if(ac == 2)
		printf("The no of solution is %d\n",solve(a, arr));
	return 0;
}
