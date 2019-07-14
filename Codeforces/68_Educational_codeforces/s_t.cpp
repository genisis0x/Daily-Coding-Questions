// #include <iostream>
#include <bits/stdc++.h>
using namespace std;


void util(string p, string s, string t)
{
    
}







int main()
{
    int num;
    cin >> num;
    vector <string> str(num, 0);
    for(int j = 0; j < num; j++)
    {
        vector <string> str(num, 0);
        for(int i = 0; i < 3; i++)
        {
            cin >> str[i];
        }
        string p = str[2];
        string s = str[0];
        string t = str[1];
        util(p, s, t);

    }
    return 0;
}