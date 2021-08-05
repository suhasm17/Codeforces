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
    ll int a[26]={0},db=0,si=0,rc=0,i;
    string s;
    cin>>s;
    for(auto c: s)
    {
       ll int cta=c-'a';
       a[cta]++;
    }
    for(i=0;i<26;i++)
    {
        if(a[i]==0)
            continue;
        else if(a[i]>=2)
            db++;
        else
            si++;
    }
    rc=db+(si/2);
    cout<<rc<<endl;
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
