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
void sub_seq_print();
void solve()
{
    int a ,b;
    cin >> a >> b;
    vi v(a);
    vi v2(b);
    vi p; // ! eta important eikane p(b) disilam pore keyal korlam je b size er shob 0 create hocce ar pushback oi 0 er por hocce
    for(auto &x : v) cin >> x;

    forcin(v2);

    
    vit it, is ;
   

    for(is = v2.begin(); is != v2.end() ;is++)
    {
        bool flag = false;
        for(it = v.begin(); it != v.end() ; it++)
        {
            if(*is == *it)
            {
                
                flag = true;
                //v[it-v.begin()] = -1;
                *it = -1;                  // uporer line ar ei line same
                 p.pb((it - v.begin()));
                break;
            }
        }
        if(!flag)
        {
            CNR;
        }
    }

    for(it = p.begin() ; (it - p.begin()) < sz(p)-1 ; it++ ) //check non decreasing kina
    {
        if(*it >= *(it+1))
        {
            CNR;
        }
    }

    CYR;
    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        //solve();
        sub_seq_print();

    }
    return 0;
}

void sub_seq_print()//with vec but i will access it like array
{
    int n;
    cin >> n;

    vi a(n);
    forcin(a);
    int i , j , k;

     cout << a[0] << endll;

    for(k = 0 ; k < n;k++)
    {

        
        //cout << a[k] << endll;

        for(i = k ; i < n; i++)
        {
            
            for(j = n-1; j >= k ; j--)
            {
                if(j == i && i != n-1) continue;
                cout << a[n-j-1+k] << " ";
            }
            cout << endll;
        }
    } 
    cout << endll;

    

}