// { Driver Code Starts
// https://practice.geeksforgeeks.org/problems/get-minimum-element-from-stack/1
#include<bits/stdc++.h>
using namespace std;
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};


int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int q;
       cin>>q;
        _stack *a = new _stack();
       while(q--){

       int qt;
       cin>>qt;

       if(qt==1)
       {
           //push
           int att;
           cin>>att;
           a->push(att);
       }
       else if(qt==2)
       {
           //pop
           cout<<a->pop()<<" ";
       }
       else if(qt==3)
       {
           //getMin
           cout<<a->getMin()<<" ";
       }
       }
       cout<<endl;
   }

}


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

/*returns min element from stack*/
int _stack :: getMin()
{
    if(s.empty())
        return -1;
    else
        return minEle;
}

/*returns poped element from stack*/
int _stack ::pop()
{
    if(s.empty())
        return -1;
    int temp;
    int a = s.top();
    s.pop();
    if(minEle > a)
    {
        temp = minEle;
        minEle = 2*minEle - a;
    }
    else
        temp = a;
    return temp;
}

/*push element x into the stack*/
void _stack::push(int x)
{
   if(s.empty())
    {
        minEle = x;
        s.push(x);
    }
    else
    {
        if(x >= minEle)
            s.push(x);
        else
        {
            s.push(2*x - minEle);
            minEle = x;
        }
    }
}



