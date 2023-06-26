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
    int a,b;
    cin >> a >> b;
    
    vector<char> v(a+b+1);
    forcin(v);
    vector<char>::iterator it;

    if(*(v.begin()+a) != '-' ) {cout << "No\n";return;}
    else
    for(it = v.begin(); it != v.begin()+a; it++)
    {
       // if( *(v.begin()+a) == '-')continue;
        if(*it >'9' || *it < '0')
        {
            cout << "No\n";
            return ;
        }
    }
    for(it = v.begin()+a+1; it != v.end(); it++)
    {
        if(*it > '9' || *it < '0')
        {
            cout << "No\n";
            return ;
        }
    }

    cout << "Yes\n";
  
    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}