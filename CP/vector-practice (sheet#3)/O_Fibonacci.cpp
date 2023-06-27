#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define endll '\n'
#define CY cout<<"YES\n";
#define CN cout<<"NO\n";
#define CYR cout<<"YES\n";return;
#define CNR cout<<"NO\n";return;
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve()
{
    int n;
    cin >> n;

    vl v;
   
    v.pb(0);v.pb(1);

    for(int i = 0; i  < n - 2; i++)
    {
       
        v.pb(v[i] +v[i+1]); 
    }
    
    cout << v[n-1];
    
    


    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

void solve2(){
    ll n;
    cin >> n;
    vl fib(n+2);
    vl :: iterator it;
    fib[0]=0;
    fib[1]=0;
    fib[2]=1;
        for(it=fib.begin()+3;it!=fib.end();it++){
            fib[it-fib.begin()]=fib[it-fib.begin()-1]+fib[it-fib.begin()-2];//fib(n) = fib(n-1) + fib(n-2)
        }
    cout << fib[n];
}