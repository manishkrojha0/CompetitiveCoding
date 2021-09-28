//Check out my youtube channel: https://www.youtube.com/c/QuarantineEngineers
//Join me on discord to discuss: https://discord.com/invite/6kcmVQx8Fx
#include<bits/stdc++.h>
using namespace std;

#define int long long
void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


class TreeNode {
public:
  int data;
  TreeNode *left;
  TreeNode *right;
  TreeNode()
  {
    data=0;
    left=NULL;
    right=NULL;
  }
  TreeNode(int v)
  {
    data=v;
    left=NULL;
    right=NULL;
  }
};

class BST{
public:
  TreeNode *root;
  bool isEmpty()
  {
    if(root==NULL) return true;
    return false;
  }

};

void solve(){
     int c=0;

     int option;
     do{
         c=1;
          cout<<"What operation you want to perform?\n Select option number .\n Enter 0 to exit.\n ";
          cout<<"1. Insert Node\n2. Search Node\n3. Delete Node\n4. Print bst values\n5. clear screen\n0. Exit screen\n";
          cin>>option;
          switch(option)
          {
            case 0:
                  break;
            case 1: cout<<"INSERTION\n";
                 //
                 break;
            case 2: cout<<"SEARCHING\n";
            //
                  break;
            case 3:
                   cout<<"DELETION\n";
                   //
                   break;
            case 4: cout<<"print\n";
            //
                    break;
             case 5:
                   cout<<"Clear Screen\n";
                   //
                   break;
             default: cout<<"Enter the valid option between 0 to 5\n";
                  break;                                     
          }
          if(c==1) break;
     } while(option);
}
int32_t main(){

      c_p_c();
      // int t;
      // cin>>t;
      // //   t=1;
      // while(t--){
        // cout<<"Case #"<<tt<<": ";
            solve();
            // tt++;
     // }
      return 0;
}