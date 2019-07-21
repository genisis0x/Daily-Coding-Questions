// Passed
#include <bits/stdc++.h>
using namespace std;

bool is_prime(int nb)
{
    int i = 2;
    if(nb == 1)
        return false;
    while(i <= sqrt(nb))
    {
        if((nb % i) == 0)
            return false;
        i++;
    }
    return true;
}


bool is_vowel(char a)
{
    return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u');
}

string solve(string A) {
    int i = 0;
    string B[2];
    B[0] = "YES";
    B[1] = "NO";
    int n = A.size();
    int flag = 0;
    int count = 0;
    while(i < n){
        if(is_vowel(A[i]))
        {
            if(is_prime(i + 1))
            {
                flag = 1;
                count++;
            }
            else
                break;
        }
        i++;
    }
    if(flag == 1 && i == n)
        return B[0];
    else if(i == n && count == 0)
        return B[0];
    else
        return B[1];
}



int main()
{
	string a = "wjcvvrpwbv";
	cout << solve(a) << endl;
	return 0;
}
