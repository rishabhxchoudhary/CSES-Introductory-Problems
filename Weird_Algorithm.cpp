#include<iostream>
#include<vector>
using namespace std;

// Code Shortners
typedef long long ll;
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll mod = 1000000007;

// Code
int main()
{
    fast;
    ll n;
    cin>>n;
    cout<<n<<" ";
    while (n!=1){
        if (n&1) n = n*3+1;
        else n = n/2;
        cout<<n<<" ";
    }
}
