// https://leetcode.com/problems/palindrome-partitioning/

class Solution {
public:
    
    bool isPalindrome(const string &s)
    {
        int start = 0;
        int end = s.size()-1;
        while(start < end)
        {
            if(s[start]!=s[end])
                return false;
            start++; end--;
        }
        return true;
    }
    
    
    void Palindrome_partition(vector<vector<string>> &res, vector<string> &res_str, string &s, int pos)
    {
        if(pos==s.size())
        {
            res.push_back(res_str);
            return ;
        }
        for(int i=1; i+pos <=s.size(); ++i)
        {
            string temp = s.substr(pos, i);
            if(isPalindrome(temp))
            {
                res_str.push_back(temp);
                Palindrome_partition(res, res_str, s, pos+i);
                res_str.pop_back();
            }
        }
    }
    
    
    vector<vector<string>> partition(string s) {
     
        vector<vector<string>> res;
        vector<string> res_str;
        Palindrome_partition(res,res_str, s, 0);
        // for(auto i: res)
        // {
        //     for(auto j: i)
        //         cout << j << " ";
        //     cout << endl;
        // }
        return res;
    }
};
