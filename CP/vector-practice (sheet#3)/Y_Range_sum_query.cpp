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
#define forcout(n) for(auto x : n) cout << x << " ";AC
void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}


void solve()
{
    ll int n, q;
    cin >> n >> q;
    vl v(n), p;
    p.pb(0);
    
   ll int sum = 0;
    
    for(auto &x : v) 
    {
        cin >> x;
        sum = sum + x;// *it diye korte caisi kinto hocce na don't know why
        p.pb(sum);
         
    }

    while(q--)
    {
        ll int l , r;
        cin >> l >> r;
        cout << p[r] - p[l-1] << endll;
    }

   
 
    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}