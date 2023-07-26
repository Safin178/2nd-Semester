#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)  ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
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
    ll int n, m;
    cin >> n >> m;
   ll int p[n+1];
    ll int c[n+1];
   ll  int fun[m+1];
    ll int freq[105][105]= {0};

    bool con1 = true, con2 = true , con3 = true;
    for(int i = 1; i <= n; i++)
    {
        cin >> p[i] >> c[i] ;
        for(int j = 1; j <= c[i] ; j++)
        {
            cin >> fun[j];
           // freq[i][fun[j]]++;
            cout << fun[j] <<" ";
        }
        cout << endll;
    }
     for(int i = 1; i <= n; i++)
    {
        cout << p[i] << " " <<  c[i] << " ";
        for(int k = 1; k <= c[i] ; k++)
        {
           
            cout << fun[k] << " ";
        }
        cout << endll;
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