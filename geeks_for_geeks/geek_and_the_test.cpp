//
//  main.cpp
//  First
//
//  Created by Manmeet Singh on 7/16/19.
//  Copyright © 2019 Manmeet Singh. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

bool palin(int n)
{
    string str = to_string(n);
    int len = (int)str.length();
    for(int i = 0, j = len -1; i <= j; i++, j--)
    {
        if(str[i] == str[j])
            continue;
        else
            return false;
    }
    return true;
}

bool is_prime(int n)
{
    int i = 2;
    while(i <= sqrt(n))
    {
        if(n % i == 0)
            return false;
        else
            i++;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    int arr[t];
    for(int i=0 ; i < t; i++)
    {
        cin >> arr[i];
    }
    for(int i=0 ; i < t; i++)
    {
        if(arr[i] > 1 && is_prime(arr[i]) && palin(arr[i]))
           cout << "1";
        else
           cout << "0";
        cout << endl;
    }
    return 0;
}

