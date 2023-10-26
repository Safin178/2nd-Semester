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
    int n;
    cin >> n;
    int p[n], a[n], b[n];
    for(int i = 1;i <= n; i++)cin >> p[i];
    for(int i = 1;i <= n; i++)cin >> a[i];
    for(int i = 1;i <= n; i++)cin >> b[i];

    priority_queue<int,vector<int>,greater<int>> q[4][4];
    for(int i = 1; i <= n; i++)
    {
        q[a[i]][b[i]].push(p[i]);
    }
    int kaj;
    cin >> kaj;
    while(kaj--){
        int c;
        cin >> c;

        int ans = INT_MAX;
        int f , b;
        for(int i = 1; i <= 3; i++)
        {
            if(!q[i][c].empty() && q[i][c].top() < ans)
            {
                ans = q[i][c].top();
                f = i, b = c;
            }
        }
         for(int i = 1; i <= 3; i++)
        {
            if(!q[c][i].empty() && q[c][i].top() < ans)
            {
                ans = q[c][i].top();
                f = c, b = i;
            }
        }
       
        if(ans == INT_MAX)
        {
            cout << -1 << " ";
        } 
        else{
            cout << ans << " ";
             q[f][b].pop();

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




