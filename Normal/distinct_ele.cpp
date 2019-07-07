#include <bits/stdc++.h>
using namespace std;


int max_ele(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 1; i < size; i++)
    {
        temp = ((arr[i] > temp) ? arr[i] : temp); 
    }
    return temp;
}

void util(int arr[], int size)
{
    int a = max_ele(arr, size);
    int ref[a + 1];
    for(int i = 0; i <= a; i++)
        ref[i] = 0;
    for(int i = 0; i < size; i++)
    {
        if(ref[arr[i]] == 0)
        {
            cout << arr[i] << " ";
            ref[arr[i]] = 1;
        }
    }
}


int main() 
{ 
    int arr[] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    util(arr, n); 
    return 0; 
}
