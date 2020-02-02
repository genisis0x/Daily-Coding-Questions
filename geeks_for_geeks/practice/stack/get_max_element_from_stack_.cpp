#include <bits/stdc++.h>
using namespace std;

struct Mystack
{
    int max_ele;
    stack<int> s;
    int maxVal()
    {
        if(s.empty())
            return -1;
        else
            return max_ele;
    }
    int pop()
    {
        int temp;
        if(s.empty())
            return -1;
        else
        {
            int t = s.top();
            s.pop();
            if(t > max_ele)
            {
                temp = max_ele;
                max_ele = 2*max_ele - t;
            }
            else
                temp = t;
        }
        return temp;
    }
    void push(int value)
    {
        if(s.empty())
        {
            max_ele = value;
            s.push(value);
        }
        else
        {
            if(value > max_ele)
            {
                s.push(2*value - max_ele);
                max_ele = value;
            }
            else
                s.push(value);
        }
    }
};




int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Mystack s;
    for(int i=0; i <= 10; ++i)
        s.push(i);
    for(int i=0; i <= 10; ++i)
    {
        cout << "Max ele: "  << s.maxVal() << endl;
        cout << "Poped ele is : " << s.pop() << endl;
    }
    return 0;
}
