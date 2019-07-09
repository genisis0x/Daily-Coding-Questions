
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
    int len = address.length();
    string res;
    for(int i = 0; i < len; i++)
    {
        if(address[i] == '.')
        {
            res += "[.]";
        }
        else
            res += address[i];
    }
    return res;
    
    }
};
