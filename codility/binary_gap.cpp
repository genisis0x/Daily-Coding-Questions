//https://app.codility.com/programmers/lessons/1-iterations/binary_gap/

int solution(int N)
{
    int flag = 0;
    int count = 0;
    int max_count = 0;
    while(N)
    {
        int n = (N & 1) ? 1 : 0;
        N >>= 1;
        if(flag && n == 0)
            count++;
        else if(flag && n == 1)
        {
            max_count = (max_count < count) ? count : max_count;
            count = 0;
        }
        else if(n == 1)
            flag = 1;
    }
    return max_count;
}
