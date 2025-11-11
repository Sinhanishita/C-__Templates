/// IN THE NAME OF ALLAH
 
#include <bits/stdc++.h>
using namespace std;
 
#define slow ios_base::sync_with_stdio(false); cin.tie(NULL)
#define nl '\n'
#define ll long long
#define sp ' '
#define PI 3.14159265358979323846
#define db double
#define pb push_back
#define f first
#define s second
#define all(x) x.begin(), x.end()
#define cn continue
#define mod 1000000007
 
bool ok(ll n){
    if(n < 2) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;
    for(int i = 5; i * i <= n; i+=6){
        if(n % i == 0 || (n % (i + 2)) % 2 == 0)
            return false;
    }
    return true;
}

 
int32_t main() {
    slow;
    ll n; cin >> n;
    if(ok(n)) cout << "YES" << nl;
    else cout << "NO" << nl;
}