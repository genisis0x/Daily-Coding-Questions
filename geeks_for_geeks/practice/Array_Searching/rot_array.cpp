//https://practice.geeksforgeeks.org/problems/reversal-algorithm/0/?track=sp-arrays-and-searching&batchId=152

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >>t;
    for(int i=0; i < t; i++)
    {
        int size, rot;
        cin >>size;
        vector <int> arr(size);
        for(int j = 0 ; j < size; j++)
        {
            cin >> arr[j];
        }
        cin >> rot;
        int j;
        for(j= rot; j < size; j++)
            cout << arr[j] << " ";
        for(j = 0; j < rot -1; j++)
            cout << arr[j] << " ";
        cout << arr[j] << endl;
    }
    return 0;
}

