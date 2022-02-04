#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define MOD 1000000007
#define MODA 998244353
#define pb push_back
#define sortv(v) sort(v.begin(), v.end())
#define sorta(A, N) sort(A, A + N)
#define debug(x) cerr << #x << " is " << x;
#define rep(i, a, N) for (ll i = a; i < N; i++)
#define f first
#define s second
#define uniq(v)                                       \
    {                                                 \
        sort(v.begin(), v.end());                     \
        v.erase(unique(v.begin(), v.end()), v.end()); \
    }
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solve(ll tcase)
{
    ll n, t, ans = 0;
    cin >> n >> t;
    ll a[n];
    rep(i, 0, n) cin >> a[i];
    ll prefix[n + 1];
    prefix[0] = 0;
    rep(i, 0, n) prefix[i + 1] = prefix[i] + a[i];
    ll left = 0, right = 0;
    while (right <= n)
    {
        if (prefix[right] - prefix[left] <= t)
            ans = max(ans, right - left), right++;
        else
            left++;
    }
    cout << ans;
}
int main()
{
    speed;
    ll t = 1;
    rep(i, 1, t + 1)
        solve(i);
}