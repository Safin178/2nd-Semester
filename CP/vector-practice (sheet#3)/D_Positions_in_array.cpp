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
void solve3();

void solve()
{
    int n;
    cin >> n;
    vi v(n);
    for(auto &x : v) cin >> x;//input sesh

    vi::iterator it;

    for( it = v.begin(); it != v.end(); it++)
    {
        if(*it <= 10)
        {
            cout << "A[" << (it-v.begin()) << ']' << " = " << *it << endl;
        }
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

void solve2(){
    int n,i;
    cin >> n;
    vector<int> arr(n);
    vector<int>::iterator it;
    for(auto &x : arr){
        cin >> x;
    }
    for(i=0;i<(int)arr.size();i++){
        if(arr[i]<=10){
            it=find(arr.begin()+i,arr.end(),arr[i]);
            cout << 'A' << '[' << it-arr.begin() << ']' << " " << '=' << " " << arr[i] << endl;
        }
    }
}

void solve3()//hehe this also works like a normal array
{
    int n;
    cin >> n;
    vi v(n);
    for(auto &x : v) cin >> x;//input sesh

    vi::iterator it;//it er kono kaj ei cilo na lol
    for(int i = 0 ; i < sz(v); i++)
    {
        if(v[i] <= 10)
        {
             cout << "A[" << i << ']' << " = " << v[i] << endl;
        }
    }
}