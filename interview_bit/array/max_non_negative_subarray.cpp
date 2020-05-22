// https://www.interviewbit.com/problems/max-non-negative-subarray/
vector<int> Solution::maxset(vector<int> &A) {
long int start=0,end=-1;
long int a=INT_MIN,b=0;
long int real_start=0;
long int count=0,prev_count=0;
for(long int i=0;i<A.size();i++)
{

    if(A[i]<0)
    {
        start=i+1;
        b=0;
        prev_count=count; //storing length of previous subarray
        count =0;
    }
    else
    {
        b+=A[i];
        count++; //to count lenth of subarray
        if(b==a)   //to check for maximum length sement with same sum
        {
            if(count>prev_count)
            {
                real_start=start;
                end=i;
            }
            
        }
        if(b>a)  
        {
            a=b;
            real_start=start;
            end=i;
        }
    }
}
vector<int> z;
if(end==-1)return z;
for(long int i=real_start;i<=end;i++)
    z.push_back(A[i]);
    
return z;}
