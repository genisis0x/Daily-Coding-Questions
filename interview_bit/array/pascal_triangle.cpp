// https://www.interviewbit.com/problems/pascal-triangle/

vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > v;
    int a[A][A];
    for( int i=0; i<A; i++) {
        vector<int> t;
        for(int j=0; j<=i; j++) {
            if(i==j || j==0)
                a[i][j]=1;
            else
                a[i][j] = a[i-1][j-1] + a[i-1][j];
            t.push_back(a[i][j]);
        }
        v.push_back(t);
    }
    return v;
}
