//----------- Bismillahir Rahmanir Raheem -------------/
#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v) ((v).begin()), ((v).end())
#define sz(v) ((int)((v).size()))
#define ll long long
#define pb push_back
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ryes {cout<<"YES\n";return;}
#define rno {cout<<"NO\n";return;}
#define vit vector<int>::iterator  
#define forcin(n) for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
#define set_sail ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ever ;1;
#define F first
#define ss second
#define mp make_pair
void print(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<< v2[i] <<" ";
		cout<<"\n";
}
void printpv(auto v2, string s = "")
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<< v2[i].ff <<" " <<v2[i].ss << nl;
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

void solve(){
    int n;
    cin >> n;
    vi v(n);
    forcin(v);
    priority_queue<int>p;

    for(int i = 0; i < sz(v); i++){
        p.push( v[i] );
        if(sz(p)<3){
            cout << -1 << nl;
            continue;
        }
        else{
            ll sum = 1;
            int k = 3;
            stack<int>st;
            while(k--){
                sum *= p.top();
                st.push( p.top() );
                p.pop();
            }
            while(!st.empty()){
                p.push( st.top() );
                st.pop();
            }
            cout << sum << nl;
        }

    }


}

int main(){
    set_sail;
    int t=1;
   // cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}


