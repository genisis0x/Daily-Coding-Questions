// https://www.interviewbit.com/problems/spiral-order-matrix-ii/
vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int> > res(A, vector<int>(A,0));
    int t=0, l=0, b=A-1, r=A-1;
    int v=1, dir=0;
    while(t<=b && l <= r){
        if(dir==0) {
            for(int i=l; i<=r; i++)
                res[t][i]= v++;
            t++;
            dir++;
        }
        else if(dir==1) {
            for(int i=t; i<=b; ++i)
                res[i][r] = v++;
            r--;
            dir++;
        }
        else if(dir==2) {
            for(int i=r; i>=l; i--)
                res[b][i] = v++;
            b--;
            dir++;
        }
        else {
            for(int i=b; i>=t; i--)
                res[i][l] = v++;
            l++;
            dir++;
        }
        dir %= 4;
    }
    return res;
}

