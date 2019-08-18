//https://leetcode.com/contest/weekly-contest-150/problems/find-words-that-can-be-formed-by-characters/
//PASSED
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countCharacters(vector<string>& words, string chars) 
    {
        map<char, int> f;
        int n = chars.size();
        int c = 0;
        for(int i =0 ; i<n; i++)
        {
            f[chars[i]] += 1;
        }
        int w_l = words.size();
        for(int i = 0; i < w_l; i++)
        {
            string temp = words[i];
            int s_l = temp.size();
            int j;
            map<char, int> t = f;    
            for(j = 0; j < s_l; j++)
            {
                if(t[temp[j]] == 0)
                    break;
                else
                    t[temp[j]] -= 1;
            }
            if(j == s_l)
                c += s_l;
        }
        return c;
    }
};