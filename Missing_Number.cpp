// Header Files and namespaces
// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
#include<map>
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
    int n; cin>>n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){int x; cin>>x; arr[i]=x;}
    sort(arr,arr+n-1);
    for(int i=0;i<=n-1;i++){
        if (i!=arr[i]-1){
            cout<<i+1;
            break;
        }
    }
    return 0;
}