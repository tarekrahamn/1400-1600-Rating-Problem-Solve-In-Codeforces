/*
Starting with the name of almighty ALLAH 
Author:  Tarek Rahman
Created: 27.07.2023 
United International University 
*/

#include <bits/stdc++.h>
#define   Tarek           ios::sync_with_stdio(false);cin.tie(0);
#define   ll              long long int
#define   ull             unsigned long long int
#define   ld              long double
#define   vi              vector<int>
#define   vll             vector<ll>
#define   vc              vector<char>
#define   vs              vector<string>
#define   vb              vector<bool>
#define   test            ll t;cin >> t;while(t--)


#define   pb              push_back
#define   ppb             pop_back
#define   mp              make_pair
#define   eb              emplace_back
#define   sz              size()
#define   ff              first
#define   ss              second
#define   YES             cout<<"YES"<<endl;
#define   NO              cout<<"NO"<<endl;
#define   exit            return ;
#define   next            continue;
#define   checkmate       return 0;
#define   nl              "\n"


#define   gcd(a,b)        __gcd(a,b)
#define   lcm(a,b)        (a/gcd(a,b))*b
#define   MOD             1000000007
#define   MOD1            998244353
#define   INF             1e18
#define   PI              3.141592653589793238462


#define   all(x)          (x).begin(), (x).end()
#define   des(x)          (x).rbegin(), (x).rend()
#define   FOREACH(it, l)  for (auto it = l.begin(); it != l.end(); it++)
#define   cinv(v)         for(auto &it:v)cin>>it;
#define   FOR(i,a,b)      for(ll i=a;i<b;i++)
#define   LOOP(i,a,b)     for(ll j=a;j<b;j++)
#define   LOOP2(i,a,b)    for(ll i=a;i<=b;i++)
#define   ROF(i, a, b)    for (ll i = a; i >=b; i--)
using namespace std;

// PRIME NUMBER TEST//
bool prime(int n){
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0)return false;
    }
    return true;
}

//Exponent function 
ll expo(ll a, ll b, ll mod){
    ll res = 1;
    while (b>0){
        if(b & 1){
            res = (res *a) % mod;
        }
        a = (a*a) % mod;
        b = b >> 1;
    }
    return res;
}

void run(){
    ll n;
    cin >> n;
    vll p(n);
    map<int,vector<pair<ll,int>>>mem;
    for(int i=0;i<n;i++){
        cin >> p[i];
    }

    for(int i=0;i<n;i++){
      int a;
      cin>>a;
      mem[a].push_back({p[i],i});
    }
    for(int i=0;i<n;i++){
      int b;
      cin>>b;
      mem[b].push_back({p[i],i});
    }
    //for(auto [color,data]:mem){
    //for(auto i:mem){
     //  sort(data.begin(),data.end());
     //   sort(i.second.begin(),i.second.end());
    //}
    for(int i=1;i<=3;i++){
      sort(mem[i].begin(),mem[i].end());
   }
   vector<ll> ans;
   vector<bool> vis(n+2,false);
   vector<int> currPos(4,0);
   int m;
   cin>>m;
   while(m--){
        int c;
        cin>>c;
 
        int res=-1;
        while(currPos[c]<mem[c].size()){
            if(vis[mem[c][currPos[c]].second]){
                currPos[c]++;
                next;
            }
            vis[mem[c][currPos[c]].second]=true;
            res=mem[c][currPos[c]].first;
            break;
        }
        ans.push_back(res);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    Tarek
    //test{
        run();
    //}
    checkmate
}

