#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long

void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve()
{
    int n, i ,x;
    cin >> n;
    vi v;
    vi::iterator it;//obuuuukkkk

    for( i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
   // printVec(v);
   int p;
   cin >> p;
   
   it = find(all(v),p);

   if(it != v.end()) cout << (it-v.begin());
   else cout << -1;



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}