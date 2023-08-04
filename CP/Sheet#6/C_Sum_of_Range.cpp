
#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long
#define pb push_back
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define yesR cout<<"YES\n";return;
#define noR cout<<"NO\n";return;
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
/*        ／＞　　フ
　　　　　| 　_　 _ |
　 　　　／` ミ＿Yノ     meow
　　 　 /　　　 　 |   
　　　 /　 ヽ　　 ﾉ  
　 　 │　　|　|　|
　／￣|　　 |　|　|    
　| (￣ヽ＿_ヽ_)__)   
　＼二つ
*/

void solve()
{
    ll a, b;
    cin >> a >> b;
    if(a > b)swap(a,b);
    a--;

    ll all_sum = (b* (b + 1) / 2) - (a*(a+1)/2)  ;
    cout << all_sum << nl;
    //even sum
    ll x = a /2, y = b/2;

    ll even_sum = (y* (y + 1)) - (x*(x+1));
    cout << even_sum << nl;

    //odd sum
    //katai na korle jiboneo milbe na
    x = (ll)ceil(a /2.0), y =(ll)ceil(b/2.0);
    a--,b--;
    a = a/2, b = b / 2;


    ll odd_sum = ((b* (b + 1))+y) - ((a*(a+1)) + x) ;

    cout << odd_sum << nl;
    ///input 10 dile , n = ceil ( n /2 ) ,
    // n^2 hocce 1 to 10 er modde shob odd er jog fol


}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}
