#include<bits/stdc++.h>
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
#define fd(i,a,b)          for(int i=a;i>=b;i--)
# define all(v)         v.begin(),v.end()
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int ceil(int n,int x)
{
    if(n%x==0) return n/x;
    else return (n/x)+1;
}
int min(int a, int b)
{
    return a<=b?a:b;
}
int fp(int n,int r)
{
    if(r==0)  return 1;
    int t=fp(n,r/2);
    if(r&1) return n*t*t;
    return t*t; 
}

bool isPerfectSquare(int x)
{ 
    long long left = 1, right = x;
   
    while (left <= right)
    {
        long long mid = (left + right) / 2;
        
        // Check if mid is perfect square
        if (mid * mid == x)
        {
            return true;
        }
         
        // Mid is small -> go right to increase mid
        if (mid * mid < x)
        {
            left = mid + 1;
        }
       
        // Mid is large -> to left to decrease mid
        else
        {
            right = mid - 1;
        }
    }
    return false;
}
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


void solve()
{  
     int n;
     cin>>n;
     string s;
     cin>>s;
     int sum=0;
     for(int i=0;i<s.size();i++)
     {
        int val=s[i]-'0';
        if(i==s.size()-1)
        {
            sum+=val;
        }
        else if(val)
        {
            sum+=val+1;
        }
     }
     cout<<sum<<endl;
}

//string s;

int32_t main()
{
   
    
    c_p_c();
    int t;

    cin>>t;

    //cout<<"t="<<t<<"\n";
    while(t--)
  //  {
        solve();
 //   }

    return 0;
}