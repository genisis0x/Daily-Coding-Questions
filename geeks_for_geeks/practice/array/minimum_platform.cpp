// PASSED
// https://practice.geeksforgeeks.org/problems/minimum-platforms/0
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t; cin>>t;
	while(t--)
	{
	    int no_of_train; cin>>no_of_train;
	    vector<int> arrival(no_of_train);
	    vector<int> departure(no_of_train);

	    for(int i=0; i<no_of_train; i++)
	        cin>>arrival[i];
	    for(int i=0; i<no_of_train; i++)
	        cin>>departure[i];
	    sort(arrival.begin(), arrival.end());
	    sort(departure.begin(), departure.end());
	    int station = 1;
	    int min_station = 1;
	    int j =0;
	    int i= 1;
	    while(i<no_of_train && j<no_of_train)
	    {
	        if(arrival[i] <= departure[j])
	        {
	            station++;
	            i++;
	            if(station > min_station)
	                min_station = station;
	        }
	        else
	        {
	            station--;
	            j++;
	        }
	    }
	    cout<<min_station<<"\n";
	}
	return 0;
}
