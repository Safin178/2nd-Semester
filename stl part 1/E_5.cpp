//----------- Bismillahir Rahmanir Raheem -------------/
#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	   ((v).begin()), ((v).end())
#define sz(v)	   ((int)((v).size()))
#define ll         long long
#define pb         push_back
#define nl         '\n'
#define yes        cout<<"YES\n"
#define no         cout<<"NO\n"
#define ryes       {cout<<"YES\n";return;}
#define rno        {cout<<"NO\n";return;}
#define vit        vector<int>::iterator  
#define forcin(n)  for(auto &x : n) cin>>x;
#define forcout(n) for(auto x : n) cout << x << " ";
#define set_sail    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ever       ;1;
#define ff         first
#define ss         second
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

void solve()
{
     ll int n;
     cin >> n;
     vl v(n);
     forcin(v);
     vl p, r;
     ll int sum = 0;
     for(ll int i  = 0;  i < sz(v); i++)
     {
        sum += v[i];
        p.pb(sum);
     } 
    //  bool f = 0;
    //  for(int i = 0 ; i  < sz(p)-1; i++)
    //  {
    //     if(p[i] != p[i+1])
    //     {
    //         f =1;
    //         break;
    //     }
    //  }
    //  if(f)
    //  {
    //     print(p); 
    //         int cnt = 0;
    //     for(int i = 0 ; i  < sz(p); i++)
    //     {
    //         if(p[i]== 0)
    //         {
    //             cnt++;
    //         }
    //     }
    //     if(p.back() == 0)cnt--;
    //     if(p[0] == 0)cnt--;
    //     cout << cnt << nl;
    //  }
    // //  else cout << n-1 << nl;
    // ! reverse prefix sum;
     sum = 0 ;
    reverse(all(v));

    for(ll int i  = 0;  i < sz(v); i++)
     {
        sum += v[i];
        r.pb(sum);
     } 
     ll int cnt = 0;
     r.pop_back();
     p.pop_back();
     reverse(all(r));
     for(ll int i = 0 ; i < sz(p); i++)
     {
        if(p[i] == r[i])cnt++;
     }
    cout << cnt << nl;


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




