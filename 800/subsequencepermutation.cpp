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
    ll int n,ct=0,i;
    cin>>n;
    string s,r;
    cin>>s;
     r=s;
     sort(r.begin(),r.end());
     for(i=0;i<n;i++)
     {
        if(s[i]!=r[i])
            ct++;
     }
     cout<<ct<<endl;
 
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
