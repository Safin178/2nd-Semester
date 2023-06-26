#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define endll '\n'
#define CY cout<<"YES\n"
#define CN cout<<"NO\n"
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
void solve2();
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for(auto &x : v) cin >> x;
    
    vit it;
    
    vi v2(v.rbegin(), v.rend());
    (v == v2)? CY: CN;

}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve2();
    }
    return 0;
}


void solve2(){
    int n,j=0;
    cin >> n;
    vi arr(n),vrr(n);
    vi::iterator it;
    forcin(arr);
    for(auto it=arr.rbegin(); it !=arr.rend();it++){
        vrr[j]= *it;
        j++;
    }
    //forcout(vrr);
    if(arr==vrr) cout << "YES" << endl;
    else cout << "NO" << endl;
}