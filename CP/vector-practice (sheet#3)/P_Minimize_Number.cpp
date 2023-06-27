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
void solve2();
void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for(auto &x : v) cin >> x;
    
    vit it;
    int cnt = 0;
    while(true)
    {
        bool f = false;
        for(it = v.begin() ; it != v.end() ; it++)
        {
            if(*it % 2 != 0)
            {
                f = true;
                break;
            }
            *it /= 2;
        }
        if(f)
        {
            cout << cnt <<"\n";
            return;
        }
        cnt++;
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

void solve2()
{
    int n,f=0,cnt=0;
    cin >> n;
    vi arr(n);
    vi :: iterator it;
    forcin(arr);

    for(it = arr.begin();it != arr.end(); it++)
    {
        if(*it % 2 == 0)
        {
            *it = *it / 2;
        }
        else
        {
            f = 1;
        }
        if(it - arr.begin() == n-1 && f==0)
        {
            cnt++;
            it = arr.begin()-1;
            continue;
        }
    }
    cout << cnt << endl;

}