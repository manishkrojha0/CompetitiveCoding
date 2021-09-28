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

vi prime;
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
// int lmbs(int c)
// {
//     return ceil(log(c));
// }
bool palin(string s)
{
    string str=s;
    reverse(s.begin(),s.end());
    return s!=str;
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
void prime_gen()
{
    for(int i=3;i<=100000;i++)
    {
        if(isPrime(i)) prime.pb(i);
    }
}
// set<string> st;
// void gen(string s,char *ch,int i,int n)
// {
//     if(s.size()==n||i==25)
//     {
//        // cout<<s<<endl;
//         st.insert(s);
//         return;
//     }
//     gen(s+ch[i],ch,i+1,n);
//     gen(ch[i]+s,ch,i+1,n);
// }
int countBits(int n)
{
    int c=0;
    while(n)
    {
        c++;
        n=n>>1;
    }
    return c;
}
int invertBits(int num,int ad)
{
    // calculating number of bits
    // in the number

    int x,y=0;
    if(ad!=0)
    {
        y=countBits(ad);
    }
    //cout<<"y="<<y<<endl;
   // if(ad>1)
    x=max(countBits(num),y);
    
 
    // Inverting the bits one by one
    for (int i = 0; i < x; i++)
       num = (num ^ (1 << i));
  
    return num;
}
int part(int l,int h,int *a)
{
    int piv=a[l];
    int low=l,high=h;
    if(low<high)
    {
        while(low<h&&a[low]<=piv)
        {
            low++;
        }
        while(high>l&&a[high]>=piv)
        {
            high--;
        }
        cout<<"low="<<low<<" high="<<high<<endl;
        if(low<high)
        {
        int t=a[low];
        a[low]=a[high];
        a[high]=t;
        }
    }
    int t=a[high];
    a[high]=piv;
    a[l]=t;

    return high;

}
void quickSort(int l,int h,int *a)
{
    if(l<h)
    {
        cout<<"manis\n";
        int pi=part(l,h,a);
        quickSort(l,pi,a);
        quickSort(pi+1,h,a);
    }
}
void solve()
{  
   // cout<<endl;
   int n;
   cin>>n;
   cout<<"n="<<n<<endl;
   int a[n+1];
   vii v;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       v.pb({a[i],i});
   }
   if(n==1)
   {
       cout<<a[1]<<endl;
       return;
   }
   if(n==2)
   {
       cout<<a[1]*a[2]<<endl;
       return;
   }
    int mx=*max_element(a,a+n);
    cout<<"mx="<<mx<<endl;
    sort(all(v));   
    int mxa=-1e15,mxb=-1e15,mxe=-1e15;
    for(int i=0;i<v.size();i++)
    {
        if(v[i].ff==mx)
        {
            int l=v[i].ss-1;
            int r=v[i].ss+1;
            if(v[i].ss==1)
            {
                mxa=max(mxa,a[r]);
                continue;
            }
            if(v[i].ss==n)
            {
                mxa=max(mxa,a[l]);
            }
            else {
                mxb=max(mxa,a[l]);
                mxe=max(mxb,a[r]);
                mxa=max(mxe,mxb);
            }

        }
    }
    cout<<"mxa="<<mxa<<endl;
    cout<<mxa*mx<<endl;

}

//string s;
int32_t main()
{
      c_p_c();
    int t;


    cin>>t;
    //t=1;
    cout<<"t="<<t<<"\n";
    while(t--)
  //  {
        solve();
 //   }

    return 0;
}