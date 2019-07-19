//https://practice.geeksforgeeks.org/problems/immediate-smaller-element/0/?track=sp-arrays-and-searching&batchId=152
#include <iostream>
using namespace std;

int main() {
int t;
cin >>t;
for(int i=0; i < t; i++)
{
int size;
cin >>size;
int *arr = new int[size];
for(int j = 0 ; j < size; j++)
{
cin >> arr[j];
}
for(int j=0; j < size -1; j++)
{
if(arr[j] > arr[j+1])
cout << arr[j+1] << " ";
else
cout << "-1 ";
}
cout << "-1" << endl;
}
return 0;
}
