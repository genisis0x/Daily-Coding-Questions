// https://app.codility.com/programmers/lessons/3-time_complexity/frog_jmp/

typedef long long ll;
int solution(int x, int y, int d) {
    ll t = (ll)y - (ll)x;
    ll di = (ll)d;
    ll r = t / di;
    if(t % di)
        return r + 1;
    else
        return r;
}
