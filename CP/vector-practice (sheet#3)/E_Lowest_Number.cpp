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
    vi v(n);
    for(auto &x : v) cin >> x;
    
    vi::iterator it;
    int min=INT32_MAX, p;
    for( it = v.begin();  it != v.end(); it++)
    {
        if(min > v[it-v.begin()])
        {
            min = *it;
            p = it-v.begin();
        }
    }
    cout << min << " " << p+1 << endll;



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
    int n,i;
    cin >> n;
    vi arr(n);
    vi::iterator it;
    for(auto &x:arr)
        cin >> x;
    int min=arr[0],p=0;
    for(it=arr.begin();it!=arr.end();it++){
        if(min>arr[it-arr.begin()]){
            min=arr[it-arr.begin()];
            p=it-arr.begin();
        }
    }
    cout << min << " " << p+1 << endl;
}