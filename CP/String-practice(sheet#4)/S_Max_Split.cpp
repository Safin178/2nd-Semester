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
    string s;
    cin >> s;
    int l = 0, r = 0, cnt=0;

    string x[1000],y;
    

    for(int i = 0 ; i  < sz(s) ; i++)
    {
        y.push_back(s[i]);

        if(s[i] == 'L') l++;
        else r++;

        if(l == r) 
        {
            x[cnt] = y;

            cnt++;
            y.clear();  
        }
    }
    cout << cnt << endll;
    for(int i = 0 ; i  < cnt ; i++)
    {
        cout << x[i] << endll;

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