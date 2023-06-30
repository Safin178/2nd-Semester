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
     string s, t, con;
     cin >> s >> t;
     int m;
    if(sz(s) >= sz(t))
    {
        m = sz(t);
        //string con(s.begin()+m, s.end()); //eta o kaj kortese kinto intialization eikane korle arki
        con = s.substr(m);
         //copy function bujtesina kicco 
    }
    else
    {
         m = sz(s);
         con = t.substr(m);
    }

    for(int i = 0 ; i < m; i++)
    {
        cout <<s[i]<<t[i];
    }
    cout << con << endll;
    

    



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}