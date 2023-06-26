#include<bits/stdc++.h>
using namespace std;

typedef vector<long long> vl;
typedef vector<int> vi;

#define all(v)	((v).begin()), ((v).end())
#define sz(v)	((int)((v).size()))
#define ll long long

void printVec(vector<int> v2, string s = "")//vector ke print kore just printVec(v) likle hobe
{
	cout<<s;
	for (int i = 0; i < (int)v2.size(); ++i)
			cout<<v2[i]<<" ";
		cout<<"\n";
}

void solve()
{
    vi v;
    int i, n;
    cin >> n;
   
    for( i =0; i < n; i++)
    {
        int x;cin >> x;
        v.push_back(x);
    }
    //experiment : eta input kinto tobo jinish ta kaj kortese
     /*  vi v(n);
            for(auto &x : v)
            {
                cin >> x;
            }
    */
    vi::iterator it;

    for(it= v.begin();  it != v.end(); it++)
    {
        if(*it > 0) *it =1;
        else if(*it < 0) *it = 2;
    }
    
    printVec(v);

    



}

int main(){
    int t=1;
    //cin >> t;          // remove '//' for testcase
    while(t--){
        solve();
    }
    return 0;
}


void solve2(){
    int n,i;
    cin >> n;
    vi arr(n);
    vi::iterator it;
    for(auto &x : arr){
        cin >> x;
        if(x<0){
            cout << '2' << " ";
        }
        else if(x>0){
            cout << '1' << " ";
        }
        else{
            cout << '0' << " ";
        }
    }
}