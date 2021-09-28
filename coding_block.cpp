#include<bits/stdc++.h>
#include<queue>
#include<stdlib.h>
//#include<sysUtils.hpp>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define vii             vector<pii>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18                
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define fi(i,a,b)          for(int i=a;i<b;i++)
#define all(v)          v.begin(),v.end()
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
int n,m;

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
bool isPrime(int n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

void c_p_c()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}
int min(int &x,int &y)
{
    if(x>=y)
        return y;
    else return x;
}

int fp(int n,int r)
{
    if(r==0) return 1;
    int t=fp(n,r/2);
    if(r&1) return n*t*t;
    else return t*t;
}
int cod(int n)
{
    int c=0;
    while(n)
    {
        c++;
        n=n/10;
    }
    return c;
}
void dfs(vector<int> ar,int i,int target,vector<vi> &ans,vector<int> &temp,int n)
{
    if(i>=n) return;
    //cout<<target<<" " <<ar[i]<<endl;

    if(target==0)
    {
        ans.push_back(temp);
        return;
    }

    temp.push_back(ar[i]);
   if(target>=ar[i]) dfs(ar,i,target-ar[i],ans,temp,n);
   temp.pop_back();
   dfs(ar,i+1,target,ans,temp,n);
    

}
void solve()
{
     int n;
     cin>>n;

     vi ar(n,0);
     fi(i,0,n)
     {
        cin>>ar[i];

     }

     int target;
     cin>>target;
     vi temp;
     vector<vi> ans;
     dfs(ar,0,target,ans,temp,n);
     sort(all(ans));
     //cout<<ans.size()<<endl;
     for(auto it:ans)
     {
        fi(i,0,it.size())
        {
            cout<<it[i]<<" ";
        }
        cout<<endl;
     }

}

int32_t main()
{
     c_p_c();

    // int t;
    // cin>>t;
    // while(t--)
    {
        solve();
    }
	return 0;
}