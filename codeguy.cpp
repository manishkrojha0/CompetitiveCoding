#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;
 
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
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
#define f(i,n)          for(int i=0;i<n;i++)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());
 
// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int sod(int n)
{
    int s=0;
    while(n)
    {
        s+=n%10;
        n=n/10;
    }
    return s;
} 
bool avail(queue<int>q,int s)
{
    queue<int>p=q;
    int f=0;
    while(!p.empty())
    {
        if(p.front()==s)
        {
            f=1;
            break;
        }
        p.pop();
    }
    if(f) return true;
    else
        return false;
}
int32_t main()
{
    c_p_c();
    int t;
    cin>>t;
    while(t--)
    {
        int c=1;
        //cin>>c;
        while(c)
        {
            int x=13;
            cout<<setbits(x)<<endl;
        }
        
    }
    return 0;
}