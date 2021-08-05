/*
- - - - - - - - - - -
Author:artist17
- - - - - - - - - - -
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back
#define f first
#define s second
template<typename KeyType, typename ValueType> 
std::pair<KeyType,ValueType> get_max(const std::map<KeyType,ValueType>& x ) 
{
  using pairtype=std::pair<KeyType,ValueType>; 
  return *std::max_element(x.begin(), x.end(), [] (const pairtype & p1, const pairtype & p2) 
  {return p1.second < p2.second;}); 
}
 
void solve()
{
    ll int n,i,ans=0,pr;
    vector<ll int> v;
    cin>>n;
    for(i=0;i<n;i++)
    {
        ll int ele;
        cin>>ele;
        v.pb(ele);
    }
    for(i=0;i<n-1;i++)
    {
        pr=v[i]*v[i+1];
        ans=max(ans,pr);
    }
    cout<<ans<<endl;
}
int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
return 0;
}
