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

void solve()// this is TLE 
{
    int n, m;
    cin >> n >> m;
    vi v(n);
    for(auto &x : v) cin >> x;
    
    vit it;
    for(int i = 1 ; i  <= m ; i++)
        cout << count(all(v), i) <<"\n";



}


void solve2()
{
    int n,m,i;
    cin >>n>>m;
    vi arr(n),vrr(m+1,0);//*  vi arr(n),vrr(100100,0); age eta cilo ar resize cilo
    vi :: iterator it;
    forcin(arr);

    for(it=arr.begin() ; it-arr.begin()<n;it++)
    {
        vrr[*it]++;
    }
    //vrr.resize(m+1);
    for(it = vrr.begin()+1 ; it != vrr.end() ;it++) //* resize ero age, for(it=vrr.begin()+1;it-vrr.begin()<=m;it++)
    {
        cout << *it << endl;
    }

}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve2();
    }
    return 0;
}
