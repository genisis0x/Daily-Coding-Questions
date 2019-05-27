#include <stdio.h>
#define max(a, b) (a > b ? a : b)
int lcs(char *s1, char *s2)
{
    if(*s1 == '\0' || *s2 == '\0') return 0;
    if(*s1 == *s2) return 1 + lcs(s1 + 1, s2 + 1);
    else return max(lcs(s1 +1, s2), lcs(s1, s2 +1));
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        printf("The longest Common subsequence length is %d", lcs(av[1], av[2]));
    }
    printf("\n");
}