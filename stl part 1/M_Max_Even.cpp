


// //----------- Bismillahir Rahmanir Raheem -------------/
// #include<bits/stdc++.h>
// using namespace std;

// typedef vector<long long> vl;
// typedef vector<int> vi;

// #define all(v)	   ((v).begin()), ((v).end())
// #define sz(v)	   ((int)((v).size()))
// #define ll         long long
// #define pb         push_back
// #define nl         '\n'
// #define yes        cout<<"YES\n"
// #define no         cout<<"NO\n"
// #define ryes       {cout<<"YES\n";return;}
// #define rno        {cout<<"NO\n";return;}
// #define vit        vector<int>::iterator  
// #define forcin(n)  for(auto &x : n) cin>>x;
// #define forcout(n) for(auto x : n) cout << x << " ";
// #define set_sail    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define ever       ;1;
// #define ff         first
// #define ss         second
// #define mp make_pair
// void print(auto v2, string s = "")
// {
// 	cout<<s;
// 	for (int i = 0; i < (int)v2.size(); ++i)
// 			cout<< v2[i] <<" ";
// 		cout<<"\n";
// }
// void printpv(auto v2, string s = "")
// {
// 	cout<<s;
// 	for (int i = 0; i < (int)v2.size(); ++i)
// 			cout<< v2[i].ff <<" " <<v2[i].ss << nl;
// 		cout<<"\n";
// }

// /*        ／＞　　フ
// 　　　　　| 　_　 _ |
// 　 　　　／` ミ＿Yノ     meow
// 　　 　 /　　　 　 |   
// 　　　 /　 ヽ　　 ﾉ  
// 　 　 │　　|　|　|
// 　／￣|　　 |　|　|    
// 　| (￣ヽ＿_ヽ_)__)   
// 　＼二つ
// */

// void solve()
// {
//     int n;cin >> n;

//     vi v(n);
//     forcin(v);
//     vi e, o;
//     for(int i = 0 ; i  < sz(v); i++)
//     {
//         if(v[i]%2==0)
//         {
//             e.pb( v[i] );
//         }
//         else o.pb( v[i] );
//     }
//     sort(all(e));
//     sort(all(o));
//     if(sz(o)<2 && sz(e)<2)
//     {
//         cout << -1<<nl;
//         return;
//     }
//     reverse(all(o));
//     reverse(all(e));
//     if(sz(o)>=2 && sz(e)>=2)
//     {
//        if(e[0] + e[1] > o[0]+o[1])
//         {
//             cout << e[0]+e[1] << nl;
//         }
//         else cout << o[0]+o[1]<<nl;
//     }
//     else if(sz(o)>sz(e))
//     {
//         cout << o[0]+o[1]<<nl;
//     }
//     else  cout << e[0]+e[1] << nl;

      


// }

// int main(){
//      set_sail;
//     int t=1;
//    // cin >> t;          // remove '//' for testcase
//     while(t--){
//         solve();
//     }
//     return 0;
// }
// Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef long long ll;
typedef vector<ll> vl;
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(a) ((a).begin()),((a).end())
#define pb push_back 
#define forcin(n) for(auto &x : n) cin >> x
#define forcout(n) for(auto x : n) cout << x << " "
#define sz(n) (int)n.size()
#define el '\n'
#define YES cout<< "YES\n"
#define NO cout<< "NO\n"

void printVec(vector<int> v , string s=""){
    cout << s;
    for(int i=0;i<(int)v.size();i++)
        cout << v[i] << " ";
    cout << "\n";
}



/*____________________________________________________________________________________________________________________________________*/



void solve(){
    ll n,i,e=0,o=0;
    cin >> n;
    vl a(n);
    forcin(a);
    sort(all(a));
    reverse(all(a));
    for(i=0;i<n;i++){
        if(a[i]%2==0 && e==0){
            e=a[i];
        }
        else if(a[i]%2==0 && e!=0){
            cout << a[i]+e << el;
            return;
        }
        else if(a[i]%2!=0 && o==0){
            o=a[i];
        }
        else if(a[i]%2!=0 && o!=0){
            cout << a[i]+o << el;
            return;
        }
    }
    cout << -1 << el;

}

int main(){
    
    bismillah
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}






