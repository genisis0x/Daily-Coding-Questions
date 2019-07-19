//
//  main.cpp
//  First
//
//  Created by Manmeet Singh on 7/16/19.
//  Copyright © 2019 Manmeet Singh. All rights reserved.
//

#include <iostream>

using namespace std;
int main() {
    long long t;
    cin >> t;
    long long arr[t];
    for(int i=0 ; i < t; i++)
    {
        cin >> arr[i];
    }
    for(int i=0 ; i < t; i++)
    {
        cout << (arr[i] * (arr[i] + 1) * (2 * arr[i] + 1)) / 6 << endl;
    }
    return 0;
}

