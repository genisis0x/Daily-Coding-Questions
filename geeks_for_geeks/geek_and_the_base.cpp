#include <iostream>
using namespace std;

void util(long long n)
{
    //string str = "012";
    long long arr[100] = {0};
    int i = 0;
    while(n != 0)
    {
        arr[i] = n % 3;
        n = n / 3;
        i++;
    }
    for(int j = i -1; j >=0; j--)
        cout << arr[j];
}

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
        util(arr[i]);
        cout << endl;
    }
    return 0;
}
