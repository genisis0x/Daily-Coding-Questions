// https://leetcode.com/problems/longest-palindromic-substring/

class Solution {
    
//     int longestPalindrome_recursion(string s, int n, int start, int end)
//     {
//         if(start > end)
//             return 0;
//         if(start==end)
//             return 1;
//         if(s[start]==s[end])
//             return 2 + longestPalindrome_recursion(s, n, start+1, end-1);
//         else
//         {
//             return max ((longestPalindrome_recursion(s, n, start+1, end)), longestPalindrome_recursion(s, n, start, end-1));
//         }
//     }
    
//     int longestPalindrome_dp(string s)
//     {
//         int n = s.size();
//         int dp[n+1][n+1] = {0};
//         for(int i=0;i<=n; i++)
//             dp[i][i] = 1;
//         int start = -1;
//         for(int i=0; i<=n; i++)
//         {
//             for(int j=0; j<=n; j++)
//             {
//                 if(i==0 || j==0)
//                     dp[i][j] = 0;
//                 else if(i+1==j)
//                 {
//                     if(s[i-1]==s[j-1])
//                     {
//                         dp[i][j] = 2 + dp[i-1][j-1];
//                         start = i-1;
//                     }
//                 }
//                 else
//                 {
//                     dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
//                 }
//             }
//         }
//         return dp[n][n];
//     }
    

    string longestPalindrome_dp_substr(string s)
    {
        int n = s.size();
        string res = "";
        if(n==0)
            return res;
        if(n==1)
            return s;
        int dp[n][n] = {0};
        int start = -1;
        int max_len = INT_MIN;
        // size if 1
        for(int i=0; i<n; i++)
        {
            dp[i][i] = 1;
            start = i;
            max_len = 1;
        }
        for(int i=0; i<n-1; i++)
        {
            if(s[i]==s[i+1])
            {
                dp[i][i+1] = 1;
                start = i;
                max_len = 2;
            }
        }
        for(int i=3; i <=n; i++)
        {
            for(int j=0; j < n-i+1; j++)
            {
                int k = j + i -1;
                if(dp[j+1][k-1] && s[j] == s[k])
                {
                    dp[j][k] = 1;
                    start = j;
                    max_len = max(max_len, i);
                }
            }
        }
        // cout << start;
        res += s.substr(start, max_len);
        return res;
    }
    public:
    string longestPalindrome(string s) 
    {
        // cout<<longestPalindrome_recursion(s, s.size(), 0, s.size()-1)<<endl;
        return longestPalindrome_dp_substr(s);
        // return " ";
    }
};
