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

    int x = s.find("101" , 0);//return kore hocce 1 index e position jekane pawa shoro ei sub str.. na paile -1 return
    int y = s.find("010" , 0);
    if(x >= 0 || y >= 0) cout << "Good\n";
    else cout << "Bad\n";

    //ref : mostafa saad strbasictest

    //https://cplusplus.com/reference/string/string/
    //though ami dekhi nai uporer ta , saad bhai er ta deksi

    // x=s.find(a1);
    //     y=s.find(a2); eirokom dileo kaj korto 0 oita dewa lagto na

}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}