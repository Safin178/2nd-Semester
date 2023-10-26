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
      int n, m;
      cin >> n >> m;
      string s[10000];
      for(int i = 0 ; i < n;i++)
      {
        cin >> s[i];
      }
      vector<pair<int,int>>v;
      bool ase = false;
      //int x , y;
      int cnt = 0;
      for(int i =0;i < n; i++)
      {
        
        for(int j = 0 ; j < m; j++)
        {
            if(s[i][j] =='#') 
             {
                 v.pb(mp(i+1,j+1));
            } 
        }
      }
      int x = sz(v);
      sort(all(v));
      //cout << x << nl;
     
      printpv(v);
      vi k;
      for(int i = 0; i < x; i++)
      {
        for(int j =0 ; j < x; j++)
        {
            if(i == j)continue;
            if(v[j].ff != -1 && v[j].ss!=-1){
            if(max(abs(v[i].ff - v[j].ff), abs(v[i].ss-v[j].ss)) == 1){k.pb(i);}}
            
        }
      }
      printpv(v);
      print(k);
      cout << cnt << nl;
     // cout << abs(cnt-x) << nl;


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




