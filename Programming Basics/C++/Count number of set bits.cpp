#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin >> n;

    ll c = 0;
    ll p = 0;
    vector<ll> v;

    while (n)
    {
        ll m = n & 1;
        if (m != 0)
        {
            c++;
            v.push_back(p);
        }
        p++;
        n = n >> 1;
    }

    cout << v[v.size() - 1] << endl;

    return 0;
}
