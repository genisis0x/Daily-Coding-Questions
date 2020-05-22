// https://www.interviewbit.com/problems/pascal-triangle/
vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > a;
    int v[A][A],i,j;
for(i=0;i<A;i++)
{  vector<int>c;
    for(j=0;j<=i;j++)
    { 
     if((j==0)||(i==j))
     v[i][j]=1;
     else
     {
     v[i][j]=v[i-1][j-1]+v[i-1][j];
         
     }
    
        c.push_back(v[i][j]);
    }
a.push_back(c);
    
}
return a;
}

