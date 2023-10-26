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
    int n, k;
    cin >> n >> k;
    set<int>m;
    for(int i =  0;  i < n ; i++)
    {
        int x;
        cin >> x;
        m.insert(x);
    }  
    
    while(k--)
    {
        int a = 0, b = *(--m.end());
        bool f= 0;
        for(auto it = m.begin(); *it< sz(m);it++ )
        {
            if(a != *it)
            {
                f=1;
                break;
            }
            a++;
        }
        if(!f)
        {
           a = b+1;
        }
     
     m.insert( (int)ceil((a+b)/2.0) );//! eta bhul hoi je ceil e double value
     //cout << a << " " << b << nl;
       
    }
    set<int>y;
    for(auto u : m)
    {
        y.insert ( u );
    
       // cout << u << " ";
    }
    cout <<sz(y)<<nl;


}

int main(){
     set_sail;
    int t=1;
    cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}




