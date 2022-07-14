#include "bits/stdc++.h"
#define forn(i,n) for(int i=0;i<n;i++)
#define forsn(i,s,n) for(int i=s;i<n;i++)
#define forit(i ,str) for(auto i = str.begin(); i != str.end(); i++)
#define DBG(x) cout << #x << " = " << x << endl;
#define print(x) cout << x << endl;
#define all(v) v.begin(),v.end()
#define FastIO ios::sync_with_stdio(false); cin.tie(NULL);
#define pb push_back
#define mp make_pair
#define ll long long
#define ii pair<int,int>
#define pf puts
using namespace std;
int main(){
    FastIO;
    int w = 0;cin>>w;
    if (w%2 == 0 && w!=2){
        print("YES");
    }
    else{
        print("NO");
    }
    return 0;
}