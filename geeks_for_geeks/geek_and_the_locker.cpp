//
//  main.cpp
//  First
//
//  Created by Manmeet Singh on 7/16/19.
//  Copyright © 2019 Manmeet Singh. All rights reserved.
//

#include <iostream>
using namespace std;


long locker(long n, long m)
{
    long count = 0;
    for(long i = m; i <= n; i += m)
        count++;
    return count;
}

int main() {
    int t;
    cin >> t;
    long long arr[2 * t];
    for(long i=0 ; i < (2 * t); i++)
    {
        cin >> arr[i];
    }
    for(long i=0 ; i < (2 * t); i += 2)
    {
        long count = locker(arr[i], arr[i+1]);
        cout << arr[i] - count << endl;
    }
    return 0;
}

