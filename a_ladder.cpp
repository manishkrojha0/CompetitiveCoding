#include<bits/stdc++.h>
using namespace std;
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
//using namespace std;

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
#define fi(i,a,b)       for(int i=a;i<b;i++)
#define fd(i,a,b)       for(int i=a;i>=b;i--)
#define all(v)         v.begin(),v.end()
#define ordered_set tree<pii, less<int>, rb_tree_tag, tree_order_statistics_node_update>

mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;

// typedef tree<int, int, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set_pair;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

int ceil(int n,int r)
{
    if(n%r==0) return n/r;
    else return (n/r)+1;
}
int fp(int n,int r)
{
    if(r==0) return 1;
    int t=fp(n,r/2);
    if(r&1) return n*t*t;
    return t*t;
}
// template <typename T>
// T max(T A,T B)
// {
//     return A>=B?A:B;
// }

void solve()
{  
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    int mxi=max_element(a+1,a+n+1)-a;
    int mni=min_element(a+1,a+n+1)-a;
    vi v,ar,br;
    if(n==1)
    {
        cout<<"1\n1\n";
        return;
    }
    // if(n==2)
    // {

    // }
    if(mxi>mni)
    {
         v.pb(a[mni]);
         v.pb(a[mxi]);
         int j=mxi+1;
         while(j<=n)
         {
            br.pb(a[j]);
            j++;
         }
         int i=mni-1;
         while(i>=1)
         {
            ar.pb(a[i]);
            i--;
         }
         int ans=br.size()+ar.size()+v.size();
         cout<<ans<<endl;
         for(int i=1;i<mni;i++) cout<<a[i]<<" ";
         for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
         for(int i=mxi+1;i<=n;i++) cout<<a[i]<<" ";
         cout<<endl;   
    }
    else
    {
      //  cout<<"djklhjef";
        v.pb(a[mxi]);
        v.pb(a[mni]);
        int j=mxi-1;
        while(j>=1)
        {
            br.pb(a[j]);
            j--;
        }
        int i=mni+1;
        while(i<=n)
        {
            ar.pb(a[i]);
            i++;
        }
        int ans=br.size()+ar.size()+v.size();
        cout<<ans<<endl;
        for(int i=1;i<mxi;i++) cout<<a[i]<<" ";
        for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
        for(int i=mni+1;i<=n;i++) cout<<a[i]<<" ";    
        cout<<endl;    
    }



}

int32_t main()
{
    c_p_c();

   int t;

    cin>>t;
   // cout<<"t="<<t<<endl;
    while(t--)
    {
        //ans="";
        solve();
    }

    return 0;
}