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
    int n,temp, p;
    cin >> n;
    vi v(n);

    forcin(v);
    int t;
    
    vit it, is;
    int min = INT32_MAX;
    for( it = v.begin(); it != (v.end()-1); it++)
    {
        for( is = it+1 ; is != v.end(); is++)//it +1 was the one i was missing..
        {
            p = *it + *is + (is-v.begin()+1) - (it-v.begin()+1);//j, i 1 index korte hoise tai +1
            //cout  << *it << *is << endll;
            if(min > p)
            {
                min = p;
            }
        }
    }
    
    cout << min<<"\n";
    



}

int main(){
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}