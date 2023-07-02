/* 
    .--.
   |o_o | HELLO IM GO1234550
   |:_/ |
  //   \ |
 (|     | )
/'\_   _/`\|
\___)=(___/

 */
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ENDL "\n"

class Solution{
    public:
    void merge(ll arr1[], ll arr2[], int n, int m) {
        int p1=n-1, p2 =0;
        while(p1>=0 && p2<m){
            if(arr1[p1]>arr2[p2]){
                swap(arr1[p1],arr2[p2]);
                p2++;p1--;
            }else{
                break;
            }
        }
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
    }
};
int main(){
    fastio; 
    int T;
    cin >>T;//T is the number of test cases
    while(T--){
        int n,m;
        ll arr1[n], arr2[m];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
        Solution ob;
        ob.merge(arr1,arr2,n,m);
        for(int i=0;i<n;i++){
            cout<<arr1[i]<<" ";
        }
        for(int i=0;i<m;i++){
            cout<<arr2[i]<<" ";
        }
        cout<<endl;
    }
    return 0; 
}