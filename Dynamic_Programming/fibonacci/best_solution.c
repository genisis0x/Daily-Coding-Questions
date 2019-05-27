/*********************************** https://artofproblemsolving.com/wiki/index.php/Binet%27s_Formula **********************/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
	if(ac == 2)
	{
		int n = atoi(av[1]);
		printf("The %dth fibonacci num is %d\n", n,(int)round(sqrt(5.0) / 5 * (pow(0.5 + sqrt(1.25), n) - pow(0.5 - sqrt(1.25), n))));
	}
	return 0;
}
