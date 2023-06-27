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
    int n;
    cin >> n;
    vi v(n), v2(n);
    for(auto &x : v) cin >> x;
    forcin(v2);

    vit it;

    sort(all(v));
    sort(all(v2));
    
    if(v == v2) cout << "yes\n";


    else cout << "no\n";
    
    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}

// another nasty way

//? even i don't like it ..

void solve_2(){
    int n,f=1;
    cin >> n;
    vi a(n),v(n);
    vi :: iterator it,is;

    forcin(a);
    forcin(v);

    for(it=v.begin();it!=v.end();it++){
        for(is=a.begin();is!=a.end();is++){
            if(*it==*is){
                *is=-1;
                break;
            }
        }
    }
    for(is=a.begin();is!=a.end();is++){
        if(*is!=-1){
            f=0;
            break;
        }
    }
    if(f) cout << "yes" << endl;
    else cout << "no" << endl;
}